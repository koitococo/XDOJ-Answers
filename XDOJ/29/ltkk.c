#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input[64];
    for (int i = 0; i < 64; i++)
    {
        input[i] = 0;
    }
    scanf("%s", input);
    int sum = 0;
    for (int i = 0; i < 64; i++)
    {
        if (input[i] == 0)
        {
            break;
        }
        else
        {
            sum += input[i] - '0';
        }
    }
    printf("%d", sum);
    return 0;
}
