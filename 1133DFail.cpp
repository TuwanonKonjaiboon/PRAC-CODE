#include <stdio.h>
#include <unordered_map>
using namespace std;

unordered_map <long double, int> m;
int n, cnt = 0;
int main (){
    scanf("%d", &n);
    long double a[n], b[n];
    for (int i=0;i<n;i++) scanf("%Lf", a+i);
    for (int i=0;i<n;i++) scanf("%Lf", b+i);
    for (int i=0;i<n;i++){
        if (a[i] == 0 && b[i] == 0) cnt++;
        if (a[i] != 0) {
            m[-b[i]/a[i]]++;
        }
    }
    int mx = 0;
    // for (unordered_map <long double, int>::iterator it=m.begin(); it!=m.end(); it++) {
    //     cout << it->first << " " << it->second << endl;
    // }
    for (unordered_map <long double, int>::iterator it=m.begin(); it!=m.end(); it++) {
        if (it->second > mx) mx = it->second;
    }
    printf("%d", mx + cnt);
    return 0;
}