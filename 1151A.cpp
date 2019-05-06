#include <cstdio>
#include <algorithm>
using namespace std;

int n, mn = 2e9;
char geo[] = "ACTG";
int main() {
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for (int i=0;i<=n-4;i++) {
        int cnt = 0;
        for (int j=0;j<=3;j++) {
            char c1 = s[i+j]-64, c2 = geo[j]-64;
            int a = c1 >= c2 ? c1-c2 : c1-c2+26, b = c2 >= c1 ? c2-c1 : c2-c1+26;
            // printf("c %d %d\na %d %d\n",c1, c2, a, b);
            cnt += min(a, b);
        }
        mn = min(mn, cnt);
    }
    printf("%d", mn);
    return 0;
}