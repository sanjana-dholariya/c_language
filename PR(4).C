#include<stdio.h>
#include<conio.h>
main()
{
  int a;
  clrscr();
  printf("press 1 for monday\n");
  printf("press 2 for tuesday\n");
  printf("press 3 for wednesday\n");
  printf("press 4 for thursday\n");
  printf("press 5 for friday\n");
  printf("press 6 for saturday\n");
  printf("press 7 for sunday\n");
  printf("enter your choice");
  scanf("%d",&a);
  switch (a)
  {
    case 1:
       printf("monday.....");
    break;
    case 2:
      printf("tuesday.....");
    break;
    case 3:
      printf("wednesday.....");
    break;
    case 4:
      printf("thursday......");
    break;
    case 5:
      printf("firday....");
    break;
    case 6:
      printf("saturday.....");
    break;
    case 7:
      printf("sunday.....");
    break;
  }
  getch();




}