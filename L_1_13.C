#include<stdio.h>
#include<conio.h>
main()
{
  int j,i;
  clrscr();
  for(i=5;i>=1;i--)
  {
    for(j=i;j<=5;j++)
    {
      if(j<=5)
      {
	printf("  *",j);
      }

    }
    printf("\n");

  }
  getch();


}