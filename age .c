#include<stdio.h>
#include<conio.h>

void main (){
	
	
	int age;
	
	printf("Enter your age :");
	scanf("%d",& age);
	
	if (age<=0)
	{
		
	printf ("Enter valid number");
    
	}
	
	else if (age<18)
    {
    	printf ("You are not eligible for vote ");
	}
	
	else if (age>100)

	{
		
		printf ("Not valid number");
		
		}
	
	else
	{
		
	printf ("You are eligible for vote");
		
	}	
	
		
	
	
		
	
	
	
	
	
	
}