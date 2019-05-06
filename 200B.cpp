#include <stdio.h>

int n;
int main (){
    scanf("%d", &n);
    double x = 0, p;
    for (int i=0;i<n;i++) {
        scanf("%lf", &p);
        x += p;
    }
    printf("%.12lf", x/n);
    return 0;
}