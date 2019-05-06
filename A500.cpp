#include <iostream>
using namespace std;

int n, t, has = 0;

void dfs(int a[], int i, int t) {
    if (i == t) has = 1;
    else if (i > t) has = 0;
    else dfs(a, i+a[i], t);
}

int main (){
    cin >> n >> t;
    int a[n+2];
    for (int i=1;i<n;i++) {
        cin >> a[i];
    }
    dfs(a, 1, t);
    if (has == 1) cout << "YES";
    else cout << "NO";
    return 0;
}