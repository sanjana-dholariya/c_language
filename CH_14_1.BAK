#include<stdio.h>
#include<conio.h>

main()
{
  FILE *fp;
  char data[100];
  clrscr();

  fp=fopen("data.txt","a");

  printf("enter any data:");
  gets(data);

  fputs(data,fp);

  fputs("\n",fp);

  printf("\n\n data written successfully........ ");

  fclose(fp);



  fp= fopen("data.txt","r");

  printf("\n\n file data: \n");
  printf("---------------------");

  while(fgets(data,2,fp)!=NULL)
  {
      printf("%s",data);
  }

  fclose(fp);

  getch();
}