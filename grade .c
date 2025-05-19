#include<stdio.h>
#include<conio.h>


void main()
{
	int math,hindi,ss,english,sci,total;
	float per;
	  
	  printf ("Enter a math :");
	  scanf("%d",&math);
	  
	  printf ("Enter a hindi :");
	  scanf("%d",&hindi);
	  
	  printf ("Enter a ss :");
	  scanf("%d",&ss);
	  
	  printf ("Enter a english :");
	  scanf("%d",&english);
	  
	  printf ("Enter a sci :");
	  scanf("%d",&sci);
	  
	  total = math + hindi + ss + english + sci;
	
	  per =total/5;
	  printf ("your percentage is %.2f",per);
	
	 if(per>=95)
    {
    	printf("your grade is : A1");
	}
    else if (per>=90)
    {
    	printf("your grade is : A");
	}
	
     else if (per>=85)
    {
    	printf("your grade is : B1");
	}
	 else if (per>=75)
    {
    	printf("your grade is : B");
	}
	
	 else if (per>=50)
    {
    	printf("your grade is : C");
	}
	
	 else if (per<=33)
    {
    	printf("your grade is : fail");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
