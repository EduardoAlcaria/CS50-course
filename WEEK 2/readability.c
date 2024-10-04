#include<stdio.h>
#include<string.h>

int analize(int str);
int main(void)
{
    int words = 1, j;
    int letters = 1, i;
    int sen = 0, h;
    char str[100000];
    printf("text: ");
    scanf("%[^\n]s", str);


 

int analize(int str);
{
//number of letters
    for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ' || str[i+1] != '\0')
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
//number of sentences
    for (int h = 0; str[h] != '\0'; h++)
    {
        if (str[h] == '.' || str[h+1] == '\0')
        {
            sen++;
        }
        
    }
    
    printf("Sentences %d\n", sen);
    printf("letters %d\n", letters);
    printf("words %d\n", words);
}

}