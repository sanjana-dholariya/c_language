#include<stdio.h>
main()
{
	
	int a=10,b=40;

    int *p;
	int *q;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	p=a;
	q=b;
	
	printf("the value of a is: %d\n",p); 
	printf("the value of b is: %d",q);
}
