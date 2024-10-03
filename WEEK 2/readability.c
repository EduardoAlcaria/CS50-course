#include<stdio.h>
#include<string.h>

int wordA(str);
int main(void)
{
    float index;
    int words = 0, i;
    char str[100];
    printf("text: ");
    scanf("%s", str);
    
//number of words
int wordA(str);
{

    for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ' || str[i+1] != ' ')
            {
                words++;
            }
         }
}
    printf("%i",words);
}