#include<stdio.h>
#include<conio.h>
main()
{
  int a=1,n;
  clrscr();
  printf("enter the value of n");
  scanf("%d",&n);
  do
  {
     printf("  %d"   ,n);
     n--;

  }
   while(n>=a);
  getch();

}