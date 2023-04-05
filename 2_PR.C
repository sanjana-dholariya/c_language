#include<stdio.h>
#include<conio.h>
main()
{
  int a;
  clrscr();
  printf("enter any number:");
  scanf("%d",&a);
  (a%2==0)?printf("this number is even number.")
	 :printf("this number is odd number.");
   getch();

}
