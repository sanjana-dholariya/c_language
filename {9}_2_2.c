#include<stdio.h>

main()
{
	int i,j,r,c;
	printf("enter the size of r:");
	scanf("%d",&r);
	printf("enter the size of c:");
	scanf("%d",&c);
	int a[r][c],l;
	printf("enter the elements of 2d array:");
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
			printf("%d ",a[i][j]);
			l++;
		}
		printf("\n");
	}
	printf("the length of array is:  %d",l);
}
