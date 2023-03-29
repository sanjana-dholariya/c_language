#include<stdio.h>
#include<conio.h>
main()
{
 int n,fact=1;
 clrscr();
 printf("enter the number of n:");
 scanf("%d",&n);
 for(fact=1;1<=n;n--)
 {
    fact=n*fact;


 }

 printf("the fact value is:%d",fact);

  getch();

}