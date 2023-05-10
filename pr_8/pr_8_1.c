#include<stdio.h>


  int length( char a[1000])
{
    int i,l=0;
	for(i=0;a[i]!='\0';i++)
	{
		l++;	
	}
		
     
     return l;
}


main()
{
	char a[1000];
	int len;
	int *l;
	
	printf("enter string:");
    scanf("%s",&a);
	len=length(a);
	
	l=len;
	
	printf("the length of string is: %d",l);
	
	
}
