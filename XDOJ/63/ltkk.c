#include <stdio.h>

int main(int argc, char const *argv[])
{
    int s, tax, remain;
    scanf("%d", &s);
    remain = s;
    tax = 0;
    if (remain <= 3500)
    {
    }
    else
    {
        remain -= 3500;
        if (remain <= 1500)
        {
            tax += remain * 3 / 100;
        }
        else
        {
            tax += 45;
            remain -= 1500;
            if (remain <= 3000)
            {
                tax += remain / 10;
            }
            else
            {
                tax += 300;
                remain -= 3000;
                if (remain <= 4500)
                {
                    tax += remain / 5;
                }
                else
                {
                    tax += 900;
                    remain -= 4500;
                    if (remain <= 26000)
                    {
                        tax += remain / 4;
                    }
                    else
                    {
                        tax += 26000 / 4;
                        remain -= 26000;
                        if (remain > 0)
                        {
                            tax += remain / 10 * 3;
                        }
                    }
                }
            }
        }
    }
    printf("%d", s - tax);
    return 0;
}