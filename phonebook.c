#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[]={"ritik","vishal","harry"};
    string numbers[]={"9595-85949-38","8493-4848-48","8443-4840-38"};

    string name=get_string("Name : ");
    for(int i=0; i<3;i++)
    {
        if(strcmp(names[i], name)==0)
        {
            printf("Found ! %s\n" , numbers[i] );
            return 0;
        }
    }
    printf("Not Found : \n");
    return 1;
}
