#include <iostream>
#include <algorithm>
using namespace std;

int n, m, cnt = 0;
int abs(int x) {
    if (x > 0) return x;
    return -x;
}

int main () {
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    cin >> m;
    int b[m];
    for (int i=0;i<m;i++) cin >> b[i];
    sort(a, a+n); sort(b, b+m);
    for (int i=0, j=0; i<n && j<m;) {
        if (abs(a[i]-b[j]) <= 1) {
            cnt ++; i ++; j ++;
        }
        else if (a[i] < b[j]) i ++;
        else if (a[i] > b[j]) j ++;
    }
    cout << cnt << endl;
    return 0;
}