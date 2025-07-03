#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)

{
    int height;
    do
    {
        height=get_int("Height : ");

    }
    while(height<1 || height>20);
    draw(height);
}
void draw(int n)
{
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                printf("#");
            }
           printf ("\n");
        }
}



