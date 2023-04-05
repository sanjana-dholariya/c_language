#include<stdio.h>
#include<conio.h>
main()
{
  int i,j;
  clrscr();
  for(i=1;i<=15;i++)
  {
    for(j=i+1;j<=i;j++)
    {
      printf("%d",i);
    }
    printf("\n");
  }
  getch();
}