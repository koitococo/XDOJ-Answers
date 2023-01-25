#include <stdio.h>

void *malloc(int size);
void free(void *ptr);

#define bool int
#define true 1 == 1
#define false 0 == 1
#define number int
#define string char *

number sum(number num[], int count)
{
    number _sum = 0;
    for (int i = 0; i < count; i++)
    {
        _sum += num[i];
    }
    return _sum;
}

void __ssort(void *values[], int len, int (*cmp)(void *, void *))
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (cmp(values[i], values[j]) > 0) // return i>j, ascending
            {
                void *tmp = values[i];
                values[i] = values[j];
                values[j] = tmp;
            }
        }
    }
}

struct entity
{
    string name;
    number score;
    number score2;
};
typedef struct entity entity;
#define size_of_entity sizeof(entity)

int cmp(entity *a, entity *b)
{
    return ((a->score == b->score) && (a->score2 < b->score2)) || (a->score < b->score);
}

// main entry point
int main(int argc, char const *argv[])
{
    int num,num2;
    scanf("%d %d", &num,&num2);
    entity *data = malloc(num * size_of_entity);
    for (int i = 0; i < num; i++)
    {
        string tmp = malloc(20);
        scanf("%s %d %d", tmp, &data[i].score, &data[i].score2);
        data[i].name = tmp;
    }
    void **ptrs = malloc(num * sizeof(void *));
    for (int i = 0; i < num; i++)
    {
        ptrs[i] = &data[i];
    }
    __ssort(ptrs, num, cmp);
    for (int i = 0; i < num2; i++)
    {
        entity *e = ptrs[i];
        printf("%s %d %d\n", e->name, e->score, e->score2);
    }
    free(ptrs);
    free(data);
}