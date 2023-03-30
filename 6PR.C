#include<stdio.h>
#include<conio.h>
main()
{
   int n,fact=1;
   clrscr();
   printf("enter the nth value");
   scanf("%d",&n);
   while(1<=n)
   {
      fact=n*fact;
      n--;

   }
   printf("the fact value is:%d",fact);
   getch();

}