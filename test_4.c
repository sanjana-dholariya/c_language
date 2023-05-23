#include<stdio.h>

main()
{
	int i,n,*p;
	int a[i];
	
	printf("enter the size of array:");
	scanf("%d",&n);
	
	printf("enter the elements of array:");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nthe array is...\n\n");
	for(i=0;i<n;i++)
	{
		
		if(a[i]%2!=0)
		{
			p=&a[i];
			printf("%d",*p);
		}
	
	}
	
}
