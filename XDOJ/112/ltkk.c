#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double x;
    scanf("%lf",&x);
    printf("%.2lf",x >=0 ? sqrt(x): (x+1)*(x+1) + 2*x+1/x);
    return 0;
}
