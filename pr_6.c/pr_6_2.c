#include<stdio.h>
main()
{
	int i,cmp;
	char copy=0,r=0,a[5];
	printf("enter the string:");
	scanf("%c",&a[i]);
	copy=a[i];
	r=strrev(a[i]);
	cmp=strcmp(r,copy);
	if(cmp==0)
	{
		
		printf("this number is pelindrom.");
	}
	else
	{
		printf("this number is not pelindrom.");
	}
}
