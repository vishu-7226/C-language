#include<stdio.h>
#include<conio.h>

//         5 
//       4 5 
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5

void main()
{
    int i,j,k;

    for (i=5; i>=1; i--)
    {
        for (k=1; k<i; k++)
        {
            printf("  ");
        }
        
        for (j=i; j<=5; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}
