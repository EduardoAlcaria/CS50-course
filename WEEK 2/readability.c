#include<stdio.h>
#include<string.h>

int analize(str);

int main(void)
{
    int words = 0, j;
    int letters = 0, i;
    char str[100];
    printf("text: ");
    scanf("%[^\n]s", str);
    

int analize(str);
{
//number of letters
    for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ' || str[i+1] != ' ')
            {
                letters++;
            }
         }
//number of words
    for (int j = 0; str[j] != '\0'; j++)
    {
        if (str[j] == ' ' && str[j+1] != ' ')
        {
            words++;
        }
        
    }
    printf("Letters %d\n", letters);
    printf("Words %d\n", words + 1);
}
}