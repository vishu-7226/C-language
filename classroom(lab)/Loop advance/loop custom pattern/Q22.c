#include<stdio.h>
#include<conio.h>

//  * * *
// *     *
// *     *
// *     *
// *  *  *
// *    *
//  * *   *
void main()
{
    int i,j;

    for ( i = 1; i <= 7; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if ((i==2||i==3||i==4||i==5||i==6)&&j==1)
            {
                printf("* ");
            }
            else if ((i==2||i==3||i==4||i==5||i==7)&&j==5)
            {
                printf("* ");
            }
            else if ((i==1||i==7)&&j==2)
            {
                printf("* ");
            }
            else if ((i==1||i==5||i==7)&&j==3)
            {
                printf("* ");
            }
            else if ((i==1||i==6)&&j==4)
            {
                printf("* ");
            }
            // else if ((i==7)&&j==6)
            // {
            //     printf("* ");
            // }
            
                        
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
}
