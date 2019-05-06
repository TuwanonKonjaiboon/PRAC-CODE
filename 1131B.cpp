#include <iostream>
#include <cstdlib>
using namespace std;

int n, a = 0, b = 0, na, nb, cnt = 1;
int main (){
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> na >> nb;
        if (na == a && nb == b) {
            // cout << cnt << endl;
            continue;
        }
        if (a < b) {
            if (na >= b) cnt += min(na, nb) - b + 1;
        }
        else if (a > b){
            if (nb >= a) cnt += min(na, nb) - a + 1;
        }
        else {
            cnt += min(na, nb) - a;
        }
        a = na, b = nb;
        // cout << cnt << endl;
    }
    if (!cnt) cnt++;
    cout << cnt << endl;
    return 0;
}