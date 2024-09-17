#include<stdio.h>

int add(int a, int b);

int main(void)
{
    int x;
    int y;
    printf("x? ");
    scanf("%d", &x);
    printf("y? ");
    scanf("%d", &y);
    printf("%i", add(x, y));
}

int add(int a, int b)
{
    return a + b;
}