#include<stdio.h>
#include<conio.h>
main()
{
  int a,n1=1,n2,n=0,i=0;
  clrscr();
  printf("enter the range:");
  scanf("%d",&a);
  while(i<a)
  {
     if(i<=1)
     {
       n2=i;
     }
     else
     {
       n2=n+n1;
       n=n1;
       n1=n2;
     }
      printf("  %d",n2);
     i++;
  }

  getch();
}
