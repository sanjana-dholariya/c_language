#include<stdio.h>

main()
{
	int a,s=0;
	int *p;
	
	printf("enter any number:");
	scanf("%d",&a);
	s=a*a;
	
	p=s;
	
	printf("the square of a is %u",p);
}
