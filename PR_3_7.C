#include<stdio.h>
#include<conio.h>
main()
{
   int a,n=0,n1=1,n2,i=3;
   clrscr();
   printf("enter the range:");
   scanf("%d",&a);
   printf("%d\t",n);
   printf("%d\t",n1);
   while(i<=a)
   {
     n2=n+n1;
       printf("%d\t",n2);
	n=n1;
     n1=n2;
     i++;
   }
   getch();
}