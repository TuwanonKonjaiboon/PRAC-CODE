#include <iostream>
using namespace std;

int n, a[100005];
int main (){
    cin >> n;
    for (int i=0;i<n;i++) cin >> a[i];
    int m = 1, cnt = 1;
    for (int i=1;i<n;i++) {
        if (a[i] >= a[i-1]) cnt++;
        else {
            if (m < cnt) m = cnt;
            cnt = 1;
        }
    }
    if (m < cnt) m = cnt;
    cout << m;
    return 0;
}