#include<stdio.h>

struct distance
{
	int inch;
	int feet;
	
}d1,d2;


void main()
{
	int t_f, t_i;
	
	printf("enter inch:");
	scanf("%d",&d1.inch);
	printf("enter feet:");
	scanf("%d",&d1.feet);
	
	printf("enter inch:");
	scanf("%d",&d2.inch);
	printf("enter feet:");
	scanf("%d",&d2.feet);
	
	t_f=d1.feet+d2.feet;
	t_i=d1.inch+d2.inch;
	
	if(t_i=12)
	{
		t_f++;
		
		printf("total feet = %d",t_f);
		printf("total inch = %d",t_i);
		
	}
	else
	{
		printf("total feet = %d \n",t_f);
		printf("total inch = %d",t_i);
		
	}
	
}
