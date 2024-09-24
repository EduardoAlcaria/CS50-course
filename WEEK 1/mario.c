#include<stdio.h>

void print_row(int length, int height);
int main(void)
{
    int height = 0;
    do
    {
        printf("Height: ");
        scanf("%i", &height);  
    } while (height <= 0);

for (int i = 0; i < height; i++)
    { 
        print_row(i + 1, height);
    }
}
void print_row(int length, int height)
{
    for (int i = 0; i < height - length; i++)
    {
        printf(" ");
    }

    {   for (int i = 0; i < length; i++)
        printf("#"); 
    }

    printf("\n");
}