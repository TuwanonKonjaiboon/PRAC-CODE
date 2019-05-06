#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int n, k, arr[5005], dic[5005][5005], mx[5005];
int main (){
    scanf("%d %d", &n, &k);
    for (int i=1;i<=n;i++) scanf("%d", &arr[i]);
    if (n <= k) {
        printf("%d", n);
        return 0;
    }
    arr[n+1] = 2e9;
    sort(arr+1, arr+n+1);
    for (int i=1;i<=k;i++) {
        int pt1 = 1, pt2 = 1;
        while (pt1 < n) {
            while (arr[pt2]-arr[pt1]>5)
                pt1++;
            
            dic[pt1][i] = max(dic[pt1][i], mx[pt2+1]+pt2-pt1+1);
            pt2++;
        }

        for (int j=n+1;j>=1;j--)
            mx[j] = 0;
        for (int j=n;j>=1;j--)
            mx[j] = max(dic[j][i], mx[j+1]);
    }
    int ans = 0;
    for (int i=0;i<n;i++) 
        ans = max(ans, dic[i][k]);
    printf("%d", ans);
    return 0;
}