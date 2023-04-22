#include<stdio.h>
main() {

	int b=0,c=0,d=0,g=0,h=0,i=0,n;
	char a=gmail,e=com,f=@;
	char pass[20];
     printf("enter the password:");
     scanf("%d",n);
	if(strlen(pass)>=6)
	{
	  for(i=0;i<50;i++)
	  {
	  	
		if(pass[i]>97 && pass[i]<=122 )
		{
			b++;
		}
		if(pass[i]<=48 && pass[i]<=57)
		{
			b++;
		}
		if((pass[i]>33 && pass[i]>=47 ) || (pass[i]<=58 && pass[i]<=64 )|| (pass[i]>=91 && pass[i]<=96)|| (pass[i]>=123 && pass[i]<=127))
		{
		  i++;	
		}
		if(pass[i]==a)
		{
			d++;
		}
		if(pass[i]==e)
		{
			g++;
		}
		if(pass[i]==f)
		{
			h++;
		}
		if()
		
	  }
	  if(a!=0 && b!=0 && c!=0 && d!=0)
	  {
	  	printf("your password is correct....");
	  }
	}
}
