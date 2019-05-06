#include <iostream>
#include <stdlib.h>
using namespace std;

int n, x, cnt = 0;
int main (){
    cin >> n >> x;
    n = min(n, x);
    for (int i=1;i<=n;i++) {
        if (x%i == 0 && x/i <= n) cnt ++;
    }
    cout << cnt << endl;
    return 0;
}