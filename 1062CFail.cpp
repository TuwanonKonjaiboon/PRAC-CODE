#include <iostream>
#include <string>
using namespace std;
#define mod 1000000007

int n, q, qs[100005] = {0}, chk[100005] = {0};
string p;
int main () {
    cin >> n >> q;
    cin >> p;
    for (int i=1;i<=n;i++) {
        int k = 1;
        for (int j=1;j<i;j++) {
            k *= 2;
            k %= mod;
        }
        qs[i] = (qs[i-1] + k) % mod;
        if (p[i-1] == '0') chk[i] = chk[i-1] + 1;
        else chk[i] = chk[i-1];
    }
    // for (int i=0;i<=n;i++) cout << qs[i] << " ";
    // cout << endl;
    // for (int i=0;i<=n;i++) cout << chk[i] << " ";
    // cout << endl;
    int a, b;
    while(q--) {
        cin >> a >> b;
        cout << qs[b-a+1] - qs[chk[b]-chk[a]] << endl;
    }
    return 0;
}