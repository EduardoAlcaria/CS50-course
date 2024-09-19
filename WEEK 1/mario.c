#include<stdio.h>

void print_row(int length);
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
        print_row(i + 1);
    }
}
void print_row(int length)
{
    for (int i = 0; i < length; i++)
    {   
        printf("#"); 
    }
    printf("\n");
    
}