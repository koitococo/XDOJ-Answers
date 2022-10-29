#include <stdio.h>

int main(int argc, char const *argv[])
{
    char tmp[2048];
    for (int i = 0; i < 2048; i++)
    {
        tmp[i] = 0;
    }
    fgets(tmp,2048,stdin);
    int score = 0, combo = 0;

    char *p = tmp;
    while (1)
    {
        if (*p == 0 || *p == '\n' || *p == '0')
        {
            printf("%d",score);
            break;
        }
        if (*p == ' ')
        {
            p++;
        }
        if (*p == '1')
        {
            score += 1;
            combo = 0;
            p++;
        }
        if (*p == '2')
        {
            combo += 1;
            score += combo * 2;
            p++;
        }
    }
    return 0;
}