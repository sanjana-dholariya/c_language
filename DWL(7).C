#include<stdio.h>
#include<conio.h>
main()
{
  int a=2000;
  int n=3000;
  clrscr();
  printf("leep years between 2000 and 3000 are:\n\n",a);
  do
  {

    printf(" %d",a);
    ++a;
    ++a;
    ++a;
    ++a;

  }
    while(a<=n);

  getch();


}