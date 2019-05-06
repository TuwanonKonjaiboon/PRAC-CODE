#include <iostream>
#include <algorithm>
using namespace std;

int n, a[105], qs[105];
int main (){
    cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1);
    // for (int i=1;i<=n;i++) cout << a[i] << " ";
    // cout << endl;
    qs[0] = 0;
    for (int i=1;i<=n;i++) qs[i] = qs[i-1] + a[i];
    // for (int i=0;i<=n;i++) cout << qs[i] << " ";
    // cout << endl;
    for (int i=n;i>=0;i--) {
        if (qs[n] - qs[i] > qs[i]) {
            cout << n-i;
            break;
        }
    }
    return 0;
}