#include <stdio.h>
int main()
{
    int marks[5] = {12, 32, 34, 88, 34};
    int no = 5, pos = 2;
    for (int i = pos; i < (no - 1); i++)
    {
        marks[pos] = marks[i + 1];
    }
    no--;
    for (int j = 0; j < no; j++)
    {
        printf("%d\n", marks[j]);
    }
    return 0;
}