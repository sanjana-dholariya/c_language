#include<stdio.h>
#include<conio.h>
main()
{
  char n;
  clrscr();
  printf("enter any charactor");
  scanf("%c",&n);
  if(n<='A' && n>='z')
  {
    printf("this is alphabats...");
    scanf("%c",n);
  }
  else if(n>=1 && n<=9)
  {
   printf("this is digits..");
   scanf("%d",n);
  }
  else
  {
    printf("this is special charactor...");
    scanf("%c",n);
  }
  getch();
}