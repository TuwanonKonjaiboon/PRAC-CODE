#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <functional>
using namespace std;

int n, k, ans = -2e9;
map <int, vector <int>, greater <int> > mp;
vector <int> mx;
int main () {
    scanf("%d %d", &n, &k);
    int len, bea;
    for (int i=0;i<n;i++) {
        scanf("%d %d", &len, &bea);
        mp[bea].push_back(len);
    }
    // for (map <int, vector <int> >::iterator it=mp.begin(); it!=mp.end(); it++) {
    //     sort(it->second.begin(), it->second.end());
    // }
    for (map <int, vector <int>, greater <int> >::iterator it=mp.begin(); it!=mp.end(); it++) {
        // printf("%d => ", it->first);
        // for (int i=0;i<it->second.size();i++) printf("%d ", it->second[i]);
        // printf("\n");
        mx.insert(mx.end(), it->second.begin(), it->second.end());
        // for (int i=0;i<mx.size();i++) printf("%d ", mx[i]);
        // printf("\n");
        sort(mx.begin(), mx.end());
        int sum = 0, chk = 0;
        sum += it->first * it->second[0];
        for (int i=0, cnt=0;i<int(mx.size()) && cnt<k-1; i++, cnt++) {
            if (mx[i] == it->second[0] && !chk) {
                cnt--, chk = 1;
            }
            else {
                sum += mx[i]*it->first;
            }
        }
        // printf("%d\n", sum);
        ans = max(ans, sum);
    }
    printf("%d", ans);
    return 0;
}