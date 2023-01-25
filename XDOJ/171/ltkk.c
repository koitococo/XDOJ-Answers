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
    int id;
    int score;
};
typedef struct entity entity;
#define size_of_entity sizeof(entity)

int cmp(entity *a, entity *b)
{
    return ((a->score == b->score) && (a->id > b->id)) || (a->score < b->score);
}

// main entry point
int main(int argc, char const *argv[])
{
    int num=100,num2;
    scanf("%d", &num2);
    entity *data = malloc(num * size_of_entity);
    for (int i = 0; i < num; i++)
    {
        data[i].id = i+1;
        data[i].score = -1;
    }
    for (int i = 0; i < num2; i++)
    {
        int buf[5];
        scanf("%d %d:%d %d:%d", &buf[0], &buf[1], &buf[2], &buf[3], &buf[4]);
        entity *e = &data[buf[0] - 1];
        if (e->score == -1)
        {
            e->score = 0;
        }
        e->score += -(buf[1] * 60 + buf[2]) + (buf[3] * 60 + buf[4]);
    }
    void **ptrs = malloc(num * sizeof(void *));
    for (int i = 0; i < num; i++)
    {
        ptrs[i] = &data[i];
    }
    __ssort(ptrs, num, cmp);
    for (int i = 0; i < num; i++)
    {
        entity *e = ptrs[i];
        if (e->score <= 0)
        {
            continue;
        }
        printf("%d %d\n", e->id, e->score);
    }
    free(ptrs);
    free(data);
}