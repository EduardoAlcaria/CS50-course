#include<stdio.h>
#include<string.h>

typedef struct
{
    char name[50];
    char number[20];
}
person;

int main(void)
{
    char name[50];
    printf("Search: ");
    scanf("%49s", name);

    person people[3];
    strcpy(people[0].name,"john");
    strcpy(people[0].number, "51-9923102031");

    strcpy(people[1].name, "david");
    strcpy(people[1].number, "51-9923102031");

    strcpy(people[2].name, "carter");
    strcpy(people[2].number, "51- 9912412510");
    


    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
         
    }
    printf("Not Found");
    return 1;
    
}
