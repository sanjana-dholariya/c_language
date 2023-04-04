#include<stdio.h>
#include<conio.h>
main()
{
    int n,copy=0,rem=0,rev=0;
    clrscr();
    printf("enter your number:");
    scanf("%d",&n);
    copy=n;
    while(n!=0)
    {
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;

    }
    if(copy==rev)
    {

       printf("this number is prlindrom.");
    }
    else
    {
      printf("this number is not prlindrom.");

    }
    getch();



}
