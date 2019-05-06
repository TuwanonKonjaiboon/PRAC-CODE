#include <cstdio>
#include <set>
using namespace std;

int n, t;
set <int> s;
int f(int n) {
    n++;
    while (n%10 == 0) {
        n = n/10;
    }
    return n;
}
int main () {
    scanf("%d", &n);
    s.insert(n);
    while (true) {
        t = f(n);
        if (s.find(t) != s.end()) break;
        s.insert(t); n = t;
    }
    printf("%d", int(s.size()));
    return 0;
}