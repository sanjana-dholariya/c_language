#include<stdio.h>
#include<conio.h>
main()
{
  int a=1,n;

  clrscr();
  printf("enter the nth value: ");
  scanf("%d",&n);
  while(a<=n)

  {
    printf("    %d",a);
    ++a;
  }

  getch();

}