#include<stdio.h>
#include<conio.h>
main()
{
  int a=1,n;
  clrscr();
  printf("entr the value of n:");
  scanf("%d",&n);
  do
  {
     printf("  %d"   ,n);
     n--;

  }
   while(n>=1);
  getch();

}