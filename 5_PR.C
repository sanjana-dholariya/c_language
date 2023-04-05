#include<stdio.h>
#include<conio.h>
main()
{
  int n,f_b,s_b,bill;
  clrscr();
  printf("enter the unit of electrycity bill:");
  scanf("%d",&n);
  if(n<=50)
  {
    bill=n*0.50;
  }
  else if(n>50 && n<=150)
  {
   bill=25+(n-50)*0.75;

  }
  else if(n>100 && n<=250)
  {
      bill=100+(n-150)*1.20;
  }
  else
  {
    bill=220+(n-250)*1.50;
  }
  s_b=bill*20/100;
  f_b=bill+s_b;
   printf("total bill is: %d",f_b);
   getch();
}