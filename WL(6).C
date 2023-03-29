#include<stdio.h>
#include<conio.h>
main()
{
  int i=2,n;
  clrscr();
  printf("enter the nth value:");
  scanf("%d",&n);
  printf("the even number from n to 1 is:\n");
  while(n>=2)
  {
    if(n%2==0)
      printf("  %d",n);
      n--;

  }
  getch();


}