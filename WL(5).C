#include<stdio.h>
#include<conio.h>
main()
{
    int a,n;
    clrscr();
    a=1;
    printf("enter the nth value :\n");
    scanf("%d",&n);
    printf("the odd number from 1 to n is:\n",n);
    while(a<=n)
    {
      if(a%2!=0)
      printf("       %d",a);
      a++;

    }
    getch();

}
