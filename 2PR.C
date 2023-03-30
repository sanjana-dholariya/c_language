#include<stdio.h>
#include<conio.h>
main()
{
   int i=1,n;
   clrscr();
   printf("enter the nth value:");
   scanf("%d",&n);
   while(i<=10)
   {
     printf("%d x %d = %d\n",n,i,n*i);
     i++;

   }
   getch();

}