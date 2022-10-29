#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input[64];
    for (int i = 0; i < 64; i++)
    {
        input[i] = 0;
    }
    scanf("%s", input);
    int len = 0,min = 9,max = 0;
    for (int i = 0; i < 64; i++)
    {
        if (input[i] == 0)
        {
            break;
        }
        else
        {
           len += 1;
           int c = input[i] - '0';
            if (c > max)
            {
                max = c;
            }
            if (c < min)
            {
                min = c;
            }         
        }
    }
    printf("%d %d %d", len,max,min);
    return 0;
}