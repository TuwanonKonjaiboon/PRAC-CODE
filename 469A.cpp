#include <iostream>
#include <set>
using namespace std;

int n, t;
set <int> s;
int main (){
    cin >> n;
    int a;
    for (int i=0;i<2;i++){
        cin >> t;
        while (t--){
            cin >> a; s.insert(a);
        }
    }
    // for (set <int>::iterator it=s.begin();it!=s.end();it++) {
    //     cout << *it << " ";
    // }
    // cout << endl;
    // cout << s.size() << endl;
    if (s.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    return 0;
}