#include<stdio.h>
#include<conio.h>
main()
{
  int n,sum=0;
  clrscr();
  printf("enter the value of n:");
  scanf("%d",&n);
  while(n>=1)
  {
    sum=sum+n;
    n--;


  }
  printf("the sum is :%d",sum);

getch();
}