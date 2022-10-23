#include <stdio.h>

#define p_i 7.86
#define p_g 19.3
#define pi 3.1415926

double vol(double r){
    r /= 10;
    return r*r*r/6.0 * pi ;
}

int main(void) {
    int a,b,c,d,e,f,g;
    scanf("%d %d",&a, &b);

    printf("%.3f %.3f",p_i*vol(a),p_g*vol(b));
}