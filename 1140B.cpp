#include <cstdio>
#include <algorithm>
using namespace std;

int t, n;
char s[105];
int main () {
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        scanf("%s", s);
        if (s[0] == '>' || s[n-1] == '<') {
            printf("0\n");
        }
        else {
            int ptl = 0, ptr = n-1;
            while(s[ptl]!='>' && ptl<n)
                ptl++;
            while(s[ptr]!='<' && ptr>=0)
                ptr--;
            printf("%d\n", min(ptl, n-1-ptr));
        }
    }
    return 0;
}