#include<stdio.h>
#include<conio.h>
main()
{
  int n,a,b,c;
  clrscr();
  printf("press 1 for set calltune\n");
  printf("press 2 for check the balance\n");
  printf("press 3 for help\n");
  printf("enter your choice\n");
  scanf("%d",&n);
  clrscr();
  switch(n)
  {
   case 1:

      printf("press 1 for english\n");
      printf("press 2 for hindi\n");
      printf("press 3 for korean\n");
      printf("enter your choice\n");
      scanf("%d",&a);
   break;
   case 2:

       printf("press 1 for new plans\n");
       printf("press 2 for specil plans\n");
       printf("enter your choice\n");
       scanf("%d",&b);
   break;
   case 3:

       printf("press 1 for solve call no. issues\n");
       printf("press 2 for comunicate with manager\n");
       printf("press 3 for network complain\n");
       printf("enter your choice\n");
       scanf("%d",&c);


  }
  getch();

}