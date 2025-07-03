#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[3];

    people[0].name = "harry";
    people[0].number = "9584-8583-58";

    people[1].name = "vagish";
    people[1].number = "5849-8459-93";

    people[2].name = "kaalu";
    people[2].number= "4853-8328-24";

    string name=get_string("Name : ");
    for(int i=0;i<3;i++)
    {
        if(strcmp(people[i].name , name)==0)
        {
            printf("Found ! %s\n" , people[i].number);
            return 0;
        }
    }
    printf("Not Found ! \n");
    return 1;
}

