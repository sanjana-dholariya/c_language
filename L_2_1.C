/*10101
   0101
    101
     01
      1*/
#include<stdio.h>
#include<conio.h>
main()
{
  int i,j,s;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(s=1;s<=i+1-2;s++)
    {
      printf(" ");
    }
    for(j=i;j<=5;j++)
    {
      if(j%2==0)
      {
	printf("0",j);
      }
      else
      {
	printf("1",j);
      }
    }
    printf("\n");
  }
  getch();



}