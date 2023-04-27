#include<stdio.h>

main()
{
	int n,i,j;
	printf("enter the size of string:");
	scanf("%d",&n);
	char str[n];
	fflush(stdin);
	puts("enter string:");
	gets(str);
	int fr=0;
	for(i=0;i<n;i++)
	{
		fr=1;
		if(str[i])
		{
			for(j=i+1;j<n;j++)
			{
				if(str[i]==str[j])
				{
					fr++;
					str[j]=NULL;
				}
			}
			printf("\n%c - %d",str[i],fr);
		}
	}
}
