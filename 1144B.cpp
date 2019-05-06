#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n, ans;
vector <int> even, odd;
int main () {
    scanf("%d", &n); 
    int num;
    for (int i=0;i<n;i++) {
        scanf("%d", &num);
        if (num%2 == 0) even.push_back(num);
        else odd.push_back(num); 
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    int ez = even.size(), oz = odd.size();
    if (abs(ez - oz) <= 1) ans = 0;
    else if (ez > oz) {
        for (int i=0;i<(ez-oz-1);i++) ans += even[i];
    }
    else {
        for (int i=0;i<(oz-ez-1);i++) ans += odd[i];
    }
    printf("%d", ans);
    return 0;
}