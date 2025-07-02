#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)

{
    string strings[] = { "cat", "auto", "bus","kitty","spaceship","dobby", "kalu"};
    string n=get_string("Input : ");

    for(int i=0;i<7;i++)
    {
        if(strcmp(strings[i],n)==0)
        {
            printf("Found ! \n");
            return 0;
        }
    }
printf("Not Found \n");
}
