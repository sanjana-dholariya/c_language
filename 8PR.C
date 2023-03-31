#include<stdio.h>
#include<conio.h>
main()
{
  int n,a=1;
  clrscr();
  printf("enter any number:");
  scanf("%d",&n);
  while(n>=a)
  {
    if(n/n==a && n/a==n)
    {
      printf("this number is prime..\n");
    }
     else
    {
      printf("this number is not prime\n");
    }

    a++;

  }
  getch();


}