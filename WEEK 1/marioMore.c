#include<stdio.h>

void print_row(int lenght);
void print_rowIn(int lenght, int height);

int main(void)
{
    int height;
    do
    {
        printf("height: ");
        scanf("%i", &height);
    } while (height <= 0);

    for (int i = 0; i < height; i++)
    { 
        print_rowIn(1 + i, height); 
    }







}  
void print_rowIn(int lenght, int height)
{
    for (int i = 0; i < height - lenght; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < lenght; i++)
    {
        printf("#");
    }
    printf("  ");
    for (int i = 0; i < lenght; i++)
    {
        printf("#");
    }
    printf("\n");
}