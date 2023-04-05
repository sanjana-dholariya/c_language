#include<stdio.h>
#include<conio.h>
main()
{
  int i,j,s;
  clrscr();
  for(i=5;i>=1;i--)
  {
    for(s=1;s<=i+1-2;s++)
    {
      printf(" ");
    }
    for(j=5;j>=i;j--)
    {
      printf("%d",j);
    }
    printf("\n");
  }
  getch();
}