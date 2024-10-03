#include<stdio.h>
#include<string.h>
 
int main(void)
{
    char str[100];
    int len;
    printf("text: ");
    scanf("%s", str);
    len = strlen(str);
    if (len <= 50)
    {
        printf("Before Grade 1");
    }
    
}