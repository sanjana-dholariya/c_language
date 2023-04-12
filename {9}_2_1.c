#include<stdio.h>

main()
{
	int r,c,i,j;

	printf("enter the size of r:");
	scanf("%d",&r);
	printf("enter the size of c:");
	scanf("%d",&c);
		int a[r][c];
	printf("the element of 2d array is:");
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

}

