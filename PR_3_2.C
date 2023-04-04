#include<stdio.h>
#include<conio.h>
main()
{
  int n,i=1;
  clrscr();
  printf("enter your number:");
  scanf("%d",&n);
  while(i<=10)
  {
    printf("%d  x  %d = %d\n",n,i,n*i);
    i++;


  }
  getch();

}