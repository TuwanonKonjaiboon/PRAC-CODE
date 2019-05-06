// Time Limit Exceed
#include <stdio.h>
#include <algorithm>
using namespace std;

int n, m;
int main() {
    scanf("%d%d", &n, &m);
    int d[n][3], p[m][2];
    for (int i=0;i<3;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d", &d[j][i]); 
        }
    }
    for (int i=0;i<2;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d", &p[j][i]);
        }
    }
    for (int i=0;i<m;i++) {
        int ans = 0;
        for (int j=0;j<n;j++) {
            if (d[j][0] <= p[i][0] && p[i][0] <= d[j][1]) {
                if (abs(d[j][2]-p[i][1]) <= (p[i][0]-d[j][0])) {
                    ans ++;
                }
            }
        }
        printf("%d ", ans);
    }
    return 0;
}