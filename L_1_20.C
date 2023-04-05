#include<stdio.h>
#include<conio.h>
main()
{
  int i,j;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(j=i;j>=1;j--)
    {
      if(j%2==0)
      {
       printf(" |",j);
      }
      else
      {
	printf("  -",j);
      }
    }
    printf("\n");
  }
  getch();
}