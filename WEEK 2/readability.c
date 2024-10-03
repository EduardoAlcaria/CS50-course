#include<stdio.h>
#include<string.h>

int lettersA(str);
int main(void)
{
    float index;
    int letters = 0, i;
    char str[100];
    printf("text: ");
    scanf("%s", str);
    
//number of letters
int lettersA(str);
{

    for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ' || str[i+1] != ' ')
            {
                letters++;
            }
         }
}
    printf("%i", letters);
}