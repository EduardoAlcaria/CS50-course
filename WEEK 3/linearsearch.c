#include<stdio.h>

int main(void)
{
    int n;
    int nums[] = {49, 50, 25, 35, 39};

    printf("Search: ");
    scanf("%i", &n);
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] == n)
        {
            printf("found\n");
            printf("[%i]", i+1);
            return 0;
        }

    }
    printf("Not found\n");
    return 1;
}