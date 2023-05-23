#include<stdio.h>

main()
{
	FILE *fp;
	int data[1000];
	int i,n;
	
	fp=fopen("data.txt","a");
	
	fflush(stdin);	
	printf("enter the range of year:");
	gets(data);
	
	for(i=2000;i<n;i++)
	{
		if(n%4==0 && n%100!=0)
		{
			printf("%d",i);
		}
		else if(n%400)
		{
			printf("%d",i);
		}
		
	}
	
	fputs(data,fp);

	
	
	
	
}
