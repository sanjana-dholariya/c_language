#include<stdio.h>
#include<conio.h>
main()
{
  int n;
  clrscr;
  printf("press 1 for january\n");
  printf("press 2 for february\n");
  printf("press 3 for march\n");
  printf("press 4 for april\n");
  printf("press 5 for may\n");
  printf("press 6 for jun\n");
  printf("press 7 for july\n");
  printf("press 8 for august\n");
  printf("press 9 for september\n");
  printf("press 10 for october\n");
  printf("press 11 for nevember\n");
  printf("press 12 for december\n");
  printf("enter your choice");
  scanf("%d",&n);
  switch(n)
  {
   case 1:
      printf("this is january");
   break;
   case 2:
      printf("this is february");
   break;
   case 3:
      printf("this is march");
   break;
   case 4:
      printf("this is april");
   break;
   case 5:
      printf("this is may");
   break;
   case 6:
      printf("this is jun");
   break;
   case 7:
      printf("this is july");
   break;
   case 8:
      printf("this is ougust");
   break;
   case 9:
      printf("this is septmber");
   break;
   case 10:
      printf("this is october");
   break;
   case 11:
      printf("this is nevember");
   break;
   case 12:
      printf("this is december");
   break;
   default:
      printf("invalid choice");

  }
  getch();

}