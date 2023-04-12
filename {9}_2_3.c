#include<stdio.h>

main()
{
	int a[3][4],sum,avg,i,j;
	printf("enter the elements of 2d array:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{	
		for(j=0;j<4;j++)
		{
			sum=sum+a[i][j];
			
		}
		
	}
   avg=sum/12;
	printf("the avg of array is: %d",avg);
}
