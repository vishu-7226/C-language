#include<stdio.h>
#include<conio.h>

//WAP to Find max. from 3 using ternary operator.
void main()
{
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

     max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("Maximum number is: %d\n", max);

    
}

