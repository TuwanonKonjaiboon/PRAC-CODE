#include <stdio.h>
#include <algorithm>
using namespace std;

int n, num[200005], m = -2e9;
int main () {
    scanf("%d", &n);
    for (int i=0;i<n;i++) scanf("%d", num+i);
    int s = 0, e = 1;
    sort(num, num+n);
    // for (int i=0;i<n;i++) printf("%d ", num[i]);
    // printf("\n");
    while (!(s > e) && e < n) {
        if (num[e] - num[s] <= 5 && e < n) {
            e++;
        }
        else if (e >= n) e--;
        else {
            s++;
        }
        m = max(m, e-s);
    }
    if (n == 1) printf("1");
    else printf("%d", m);
    return 0;
}