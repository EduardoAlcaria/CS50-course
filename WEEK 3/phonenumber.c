#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[50];
    char *names[] = {"carter", "david", "john"};
    char number[50];
    char *numbers[] = {"51-991232145", "51-991232145", "51-9912301231"};

    printf("Search: ");
    scanf("%49s", name);

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
         
    }
    printf("Not Found");
    return 1;
    
}