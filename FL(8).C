#include<stdio.h>
#include<conio.h>
main()
{
  int n,sum=0;
  clrscr();
  printf("enter the value of n:");
  scanf("%d",&n);
  for(sum=0;n>=1;n--)
  {
    sum=sum+n;



  }


  printf("the sum is :%d",sum);

getch();
}