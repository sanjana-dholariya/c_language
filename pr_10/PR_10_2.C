#include<stdio.h>
#include<conio.h>

main()
{
  FILE *fp;
  char copy[100],c;
  clrscr();

  fp=fopen("copy.txt","a");

  printf("enter data:");
  gets(copy);

  c=copy[100];

  fputs(copy,fp);
  fputs("\n",fp);

//  fclose(fp);

  fp=fopen("paste.txt","w");
  printf("\n\n file data:");
  printf("-----------------------");

//  while(fgets(copy,2,fp)!=NULL)
  //{
   fputs(copy,fp);
 // }
  fclose(fp);

  getch();
}