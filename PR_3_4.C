#include<stdio.h>
#include<conio.h>
main()
{
  int n,l_d=0,f_d=0,sum=0;
  clrscr();
  printf("enter any number:");
  scanf("%d",&n);
  l_d=n%10;
  while(n>=3)
  {
    n=n/10;


  }
  f_d=n;
  sum=l_d+f_d;
  printf("the sum of last digit and first digit is: %d",sum);
  getch();


}