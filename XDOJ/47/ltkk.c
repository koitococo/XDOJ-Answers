#include <stdio.h>

int main(void) {
    int a,b,c,d,e,f,g;
    scanf("%d %d",&a, &b);
    double t = a+b/60.0;
    printf("%.2f",(4*t*t/(t+2.0))-20);
}