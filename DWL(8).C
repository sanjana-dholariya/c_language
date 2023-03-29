#include<stdio.h>
#include<conio.h>
main()
{
  int n,sum=0;
  clrscr();
  printf("enter the value of n:");
  scanf("%d",&n);
  do
  {
    sum=sum+n;
    n--;


  }

    while(n>=1);
  printf("the sum is :%d",sum);

getch();
}