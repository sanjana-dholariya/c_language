#include<stdio.h>
#include<conio.h>
main()
{
    int a,n;
    clrscr();

    printf("enter the nth value :\n");
    scanf("%d",&n);
    printf("the odd number from 1 to n is:\n",n);
    for(a=1;a<=n;a++)
    {
      if(a%2!=0)
      printf("       %d",a);


    }
    getch();

}
