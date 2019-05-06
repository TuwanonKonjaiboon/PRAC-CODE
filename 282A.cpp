#include <iostream>
using namespace std;

int n, x = 0;
string a;
int main (){
    cin >> n;
    while(n--){
        cin >> a;
        if (a[1] == '+') x++;
        else if (a[1] == '-') x--;
    }
    cout << x;
    return 0;
}