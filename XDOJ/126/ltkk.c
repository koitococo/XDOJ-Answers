#include <stdio.h>
#include <math.h>

int main(void) {
    double d,p,r;
    scanf("%lf %lf %lf",&d,&p,&r);
    printf("%.2lf",(log(p) - log(p-d*r))/log(1+r));
}