#include<stdio.h>

main()
{
	int i,j,r,c;
	printf("enter the size of row:");
	scanf("%d",&r);
	printf("enter the size of column:");
	scanf("%d",&c);
	 int a[r][c];
		
	printf("enter the element of array:");
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
			if(i==0  || j==0 || i==c-1 || j==c-1)
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
