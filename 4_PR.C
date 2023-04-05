#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c,d;
   clrscr();
   printf("enter the value of a:");
   scanf("%d",&a);
   printf("enter the value of b:");
   scanf("%d",&b);
   printf("enter the value of c:");
   scanf("%d",&c);
   printf("enter the value of d:");
   scanf("%d",&d);
   if(a>b)
   {
    if(a>c)
    {
     printf("a is greater....");
    }
    else if(c>d)
    {
      printf("c is greater...");
    }
    else
    {
     printf("d is greater...");
    }
  }
  else if(b>c)
  {
    if(b>d)
    {
      printf("b is greater..");
    }
    else if(d>a)
    {
     printf("d is greater...");
    }
    else
    {
      printf("c is greater...");
    }

  }
  else if(c>d)
  {
    if(c>a)
    {
      printf("c is greater...");
    }
    else if(b>c)
    {
      printf("b is greater....");
    }
    else
    {
      printf("d is greater..");
    }
  }
  else
  {
    if(d>a)
    {
       printf("d is greater..");
    }
    else
    {
      printf("a is greater");
    }

  }
  getch();

}