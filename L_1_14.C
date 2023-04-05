#include<stdio.h>
#include<conio.h>
main()
{
   int i,j;
   clrscr();
   for(i=1;i<=5;i++)
   {
     for(j=i;j<=5;j++)
     {
      if(j<=5)
     {
       printf(" *",j);
     }
     }
     printf("\n");


   }
   getch();

}