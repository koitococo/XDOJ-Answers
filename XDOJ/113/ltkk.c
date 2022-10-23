#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double s, cost = 10;
    int t;
    scanf("%lf %d", &s, &t);
    if (t > 5)
    {
        cost += (t/5) * 2;
    }
    if (s > 3)
    {
        cost += (s - 3) * 2;
    }
    if (s > 10)
    {
        cost += (s-10);
    }
    printf("%.0lf",round(cost));
    return 0;
}
