#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[50];
    char *words[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    printf("search: ");
    scanf("%49s", s);
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(words[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
        
    }
    printf("Not found");
    return 1;    
}
