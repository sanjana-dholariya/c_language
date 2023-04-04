#include<stdio.h>
#include<conio.h>
main()
{
  int a,fact=1;
  clrscr();
  printf("enter your number:");
  scanf("%d",&a);
  while(a>=1)
  {
    fact=a*fact;
    a--;
  }
  printf("the factorial of your number is: %d",fact);
  getch();

}