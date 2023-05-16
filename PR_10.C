#include<stdio.h>
#include<conio.h>

main()
{
  FILE *fp;
  char newf[100];
  clrscr();

  fp=fopen("newf.txt","w");

  printf("enter your data:\n\n");
  gets(newf);

  fputs(newf,fp);
  fputs("\n",fp);
  fclose(fp);

  getch();
}