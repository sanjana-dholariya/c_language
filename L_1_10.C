#include<stdio.h>
#include<conio.h>
main()
{
  int j,i;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(j=5;j>=i;j--)
    {
      printf("%d",j);

    }
    printf("\n");


  }
  getch();

}