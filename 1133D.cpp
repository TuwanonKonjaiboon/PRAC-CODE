#include <cstdio>
#include <utility>
#include <algorithm>
#include <map>
using namespace std;

map <pair <int, int>, int> m;
int n, cnt = 0, mx = 0;
int a[200005], b[200005];
int gcd(int x, int y) {
    if (x == 0) return y;
    if (y == 0) return x;
    int r = x % y;
    while (r != 0)
    {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}
int main (){
    scanf("%d", &n);
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
    for (int i=0;i<n;i++) scanf("%d", &b[i]);
    for (int i=0;i<n;i++) {
        if (a[i] == 0 && b[i] == 0) {
            cnt++;
            continue;
        }
        if (a[i] == 0 && b[i] != 0) continue;
        int d = gcd(a[i], b[i]);
        a[i] /= d, b[i] /= d;
        m[make_pair(a[i], b[i])]++;
    }
    for (map <pair <int, int>, int>::iterator it=m.begin(); it!=m.end(); it++) {
        mx = max(mx, it->second);
    }
    printf("%d", mx + cnt);
    return 0;
}