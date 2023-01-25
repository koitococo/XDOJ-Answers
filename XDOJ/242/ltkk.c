#include <stdio.h>

void *malloc(int size);
void free(void *ptr);

#define bool int
#define true 1 == 1
#define false 0 == 1
#define number int

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
    char *name;
    double num;
};
typedef struct entity entity;
#define size_of_entity sizeof(entity)

int cmp(entity *a, entity *b)
{
    return ((a->num == b->num) && (a->id > b->id)) || (a->num < b->num);
}

// main entry point
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    entity *data = malloc(num * size_of_entity);
    for (int i = 0; i < num; i++)
    {
        char *tmp = malloc(100);
        int a, b, c;
        scanf("%d %s %d %d %d", &data[i].id, tmp, &a, &b, &c);
        data[i].name = tmp;
        data[i].num = (a + b + c) / 3.0;
    }
    void **ptrs = malloc(num * sizeof(void *));
    for (int i = 0; i < num; i++)
    {
        ptrs[i] = &data[i];
    }
    __ssort(ptrs, num, cmp);
    for (int i = 0; i < num; i++)
    {
        printf("%d %s %.1lf\n", ((entity *)ptrs[i])->id, ((entity *)ptrs[i])->name, ((entity *)ptrs[i])->num);
    }
    for (int i = 0; i < num; i++)
    {
        free(data[i].name);
    }
    free(ptrs);
    free(data);
}