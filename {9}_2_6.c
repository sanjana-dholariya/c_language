#include<stdio.h>

main()
{
	int r,c,n,i,j,sum=0;
	printf("enter the size of r:");
	scanf("%d",&r);
	printf("enter the size of c:");
	scanf("%d",&c);
	int a[i][j];
	printf("enter the elements of 2d array:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	
	}
	printf("Enter the number of row which you want to print : ");
	scanf("%d",&n);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==n-1)
			{
				printf("%d",a[i][j]);
				sum+=a[i][j];
			}
		}
		printf("\n");
	}

}
