#include<stdio.h>
#include<conio.h>
//multiplications
void main()
{
    int n, i = 1;

    printf("Enter n number :");
    scanf("%d", &n);

    for ( i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
}
