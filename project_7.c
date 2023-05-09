#include<stdio.h>s
int sum(int a,int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int multi(int a,int b)
{
	return a*b;
}

int divi(int a, int b)
{
	return a/b;
}

int mod(int a,int b)
{
	return a%b;
}

  
main()
{
	int n;
	int a,b;
	printf("\npress 1 for +");
	printf("\npress 2 for -");
	printf("\npress 3 for *");
	printf("\npress 4 for /");
	printf("\npress 5 for %");
	printf("\npress 0 for exit.");
	printf("\n\nenter your choice:");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
		  
        	printf("\nenter a:");
    	    scanf("%d",&a);
        	printf("\nenter b:");
        	scanf("%d",&b);
		    printf("\nthe sum of %d and %d is: %d",a,b,sum(a,b));
		    main();
		break;
		case 2:
		  
        	printf("\nenter a:");
    	    scanf("%d",&a);
        	printf("\nenter b:");
        	scanf("%d",&b);
		    printf("\nthe substraction of %d and %d is: %d",a,b,sub(a,b));
		    main();
		break;
		case 3:
		  
        	printf("\nenter a:");
    	    scanf("%d",&a);
        	printf("\nenter b:");
        	scanf("%d",&b);
		    printf("\nthe multiplication of %d and %d is: %d",a,b,multi(a,b));
		    main();
		break;
		case 4:
		  
        	printf("\nenter a:");
    	    scanf("%d",&a);
        	printf("\nenter b:");
        	scanf("%d",&b);
		    printf("\nthe division of %d and %d is: %d",a,b,divi(a,b));
		    main();
		break;
		case 5:
		  
        	printf("\nenter a:");
    	    scanf("%d",&a);
        	printf("\nenter b:");
        	scanf("%d",&b);
		    printf("\nthe modulos of %d and %d is: %d",a,b,mod(a,b));
		    main();
		break;
		case 0:
			
		break;
		default:
		   printf("your choice is invalied.");
	}
	
	
}
