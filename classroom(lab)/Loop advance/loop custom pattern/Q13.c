#include<stdio.h>
#include<conio.h>

// *     *
// *     *
// *     *
// * * * *
// *     *
// *     *
// *     *
void main()
{
    int i,j;

    for ( i = 1 ; i <= 7; i++)
    {
        for ( j = 1; j <= 4; j++)
        {
           if(i==4||j==1||j==4)
           {
            printf("* ");
           }
           else
           {
            printf("  ");
           }
        }
        printf("\n");
        
    }
    
}
