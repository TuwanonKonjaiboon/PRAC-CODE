#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> team;
vector <int> v;
int n, k;
int main () {
    scanf("%d %d", &n, &k);
    int x;
    for (int i=0;i<n;i++) {
        scanf("%d", &x);
        v.push_back(x);
    }
    if (n <= k) {
        printf("%d", n);
        return 0;
    }
    sort(v.begin(), v.begin()+n);
    // for (int i=0;i<v.size();i++) printf("%d ", v[i]);
    // printf("\n");
    while (!v.empty()) {
        int s = 0, e = 0, ps = 0, pe = 0, mx = 0;
        // for (int i=0; i<v.size(); i++) printf("%d ", v[i]);
        // printf("\n");
        while (e < v.size()) {
            if (v[e]-v[s] > 5) {
                s++;
                // printf("a%d %d\n", s, e);
                continue;
            }
            if (e-s+1 >= mx) {
                mx = e-s+1;
                ps = s, pe = e+1;
                // printf("p%d %d\n", ps, pe);
            }
            e++;
            // printf("b%d %d\n", s, e);
        }
        
        team.push_back(mx);
        // for (int i=0;i<team.size();i++) printf("%d ", team[i]);
        // printf("\n");
        if (team.size() >= k) break;
        v.erase(v.begin()+ps, v.begin()+pe);
    }
    int sum = 0;
    for (int i=0; i<min(int(team.size()), k); i++)  sum += team[i];
    printf("%d", sum);
    return 0;
}