	  //count the number of digits...
#include<stdio.h>
#include<conio.h>
main()
{
  long int n,count=0;
  clrscr();
  printf("enter any number:\n");
  scanf("%ld",&n);
  while(n>=1)
  {
    n=n/10;
    count++;

  }
  printf("the number of this digit is:%ld",count);
  getch();



}