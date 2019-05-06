#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int x, int y){
    return x > y;
}

int n, m, q;
unsigned long long int sum = 0;
int main (){ 
    scanf("%d", &n);
    int a[n+1];
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    sort(a, a+n, cmp);
    scanf("%d", &m);
    while(m--) {
        scanf("%d", &q);
        cout << sum-a[q-1] << endl;
    }
    return 0;
}