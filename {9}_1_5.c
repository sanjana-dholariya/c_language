#include<stdio.h>

main()
{
//	int n;
//	printf("Enter number of elements : ");
//	scanf("%d",&n);
	int a[5],b[5],c[5*2],i;
	
	printf("\n enter the element of first array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
			c[i]=a[i];
	
	}
	
	printf("enter the element of second array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
		c[i+5] =b[i];
	   
	}
	 
	for(i=0;i<5*2;i++)
    {
       printf("%d ",c[i]);	
	}
}
