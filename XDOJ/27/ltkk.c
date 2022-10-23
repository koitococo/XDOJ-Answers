#include <stdio.h>

int main(void)
{
    float cost = 0;
    float used;
    scanf("%f", &used);
    if (used > 110)
    {
        cost += 110 * 0.5;
        used -= 110;
        if (used > 100)
        {
            cost += 100 * 0.55;
            used -= 100;
            cost += used * 0.7;
        }
        else
        {
            cost += used * 0.55;
        }
    }
    else
    {
        cost += used * 0.5;
    }
    printf("%.2f", cost);
    return 0;
}