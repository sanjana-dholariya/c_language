#include<stdio.h>
#include<conio.h>
main()
{
  char i='a';
  clrscr();
  printf("the alphabats is a  to z:");
  scanf("%c",&i);
  while(i<='z')
  {
     printf("\t%c",i);
     i++;


  }

  getch();



}


