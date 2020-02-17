#include<stdio.h>
int main()
{
    int i = 3;
    int *j;
    int **k;

    j = &i;
    k = &j;

    printf("Address of i = %u\n", *k);
    printf("Address of j = %u\n", k);
    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", *j);
    printf("Value of i = %d\n", **k);
}