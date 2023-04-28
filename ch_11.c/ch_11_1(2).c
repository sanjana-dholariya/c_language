#include<stdio.h>

divied();
main()
{
	divied();
}
 
 divied()
 {
 	int a;
 	printf("enter the number:");
 	scanf("%d",&a);
 	if(a%3==0 || a%5==0)
 	{
 		printf("this number is divided by 3 or 5. ");
	}
	else
	{
		printf("this number is not divided by 3 or 5.");
	}
	
 }
