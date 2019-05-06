#include <cstdio>
#include <unordered_map>
#include <algorithm>
using namespace std;

int n, m, mn = 2e9;
unordered_map <int, int > visited;
void minpress (int n, int m, int cnt) {
    if (n <= 0) return;
    if (visited.find(n) == visited.end()) visited[n] = cnt;
    else if (visited[n] < cnt) return;
    else visited[n] = cnt;
    // printf("%d\n", n);
    if (n == m) {
        mn = min(mn, visited[n]);
    }
    else if (n > m) {
        minpress(n-1, m, cnt+1);
    }
    else {
        minpress(n-1, m, cnt+1); minpress(n*2, m, cnt+1);
    }
}
int main () {
    scanf("%d %d", &n, &m);
    if (n >= m) {
        printf("%d", n-m);
        return 0;
    }
    minpress(n, m, 0);
    printf("%d", mn);
    return 0;
} 