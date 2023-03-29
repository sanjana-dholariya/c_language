#include<stdio.h>
#include<conio.h>
main()
{
  int a=1,n;
  clrscr();
  printf("enter the nth noumber:");
  scanf("%d",&n);
  do
  {
    printf("%d x %d = %d\n",n,a,n*a);
    a++;

  }
   while(a<=10);
  getch();

}