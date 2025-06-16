#include<stdio.h>
#include<conio.h>

void main()
{
    int g, b, h, d, t;
// Ex. Base Salary: 100 RS, HRA=10, DA=5, TA=8.

    printf("Enter b :");
    scanf("%d", &b);
    printf("Enter hra  :");
    scanf("%d", &h);
    printf("Enter d :");
    scanf("%d", &d);
    printf("Enter t :");
    scanf("%d", &t);

    g = b + h + d + t; // sum of all cost ..

    printf("g is %d", g);
}
