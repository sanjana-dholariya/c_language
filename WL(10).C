#include<stdio.h>
#include<conio.h>
main()
{
  int a=1,n;
  clrscr();
  printf("enter the nth noumber:");
  scanf("%d",&n);
  while(a<=10)
  {
    printf("%d x %d = %d\n",n,a,n*a);
    a++;

  }
  getch();

}