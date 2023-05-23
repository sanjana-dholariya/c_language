#include<stdio.h>

main()
{
	int r,c,i,j,cube;
	int a[i][j];
	
	printf("enter the size of raw:");
	scanf("%d",&r);
	
	printf("emter the size of column:");
	scanf("%d",&c);
	
	printf("enter the elements of array:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
		  cube=a[i][j]*a[i][j]*a[i][j];
		  printf("cube : %d",cube);	
		}
		printf("\n");
		
	}
}
