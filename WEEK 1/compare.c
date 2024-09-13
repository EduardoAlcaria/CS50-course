#include <stdio.h>

int main(void)
{
    int x;
    int y;
    printf("Enter the X value: ");
    scanf("%d", &x);
    printf("Enter the Y value: ");
    scanf("%d", &y);
    if (x < y)
    {
        printf("X is less then Y\n");
    }
    else if (x > y)
    {
        printf("X is greater then Y\n");
    }
    else
    {
        printf("X is igual to Y\n");
    }
}