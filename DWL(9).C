#include<stdio.h>
#include<conio.h>
main()
{
 int n,fact=1;
 clrscr();
 printf("enter the number of n:");
 scanf("%d",&n);
 do
 {
    fact=n*fact;
    n--;

 }
  while(1<=n);
 printf("the fact value is:%d",fact);

  getch();

}