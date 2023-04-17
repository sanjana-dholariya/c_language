#include<stdio.h>

main()
{
	int r,c,j,i;
	printf("enter the size of r:");
	scanf("%d",&r);
	printf("enter the size of c:");
	scanf("%d",&c);
	printf("enter the element of array:");
	int a[r][c];
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
			 if(i==r || j==0)
			 {
			 	printf("-");
			 }
			 
			 else
			 {
			 	printf("%d",a[i][j]);
			 }
		}
		printf("\n");
	}
}
