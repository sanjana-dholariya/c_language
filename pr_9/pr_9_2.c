#include<stdio.h>

struct marks
{
	char name;
	int r_n;
	int chem_marks;
	int maths_marks;
	int phy_marks;
	
}s[5];

void main()
{
	int i,total;
	int pr;
	
	for(i=0;i<5;i++)
	{
		printf("enter student name:");
		scanf("%s",&s[i].name);
		
		printf(" enter roll no.");
		scanf("%d",&s[i].r_n);
		
		printf("enter chamistry marks:");
		scanf("%d",&s[i].chem_marks);
		
		printf("enter maths marks:");
		scanf("%d",&s[i].maths_marks);
		
		printf("enter physics marks:");
		scanf("%d",&s[i].phy_marks);
		
		total=s[i].chem_marks+s[i].maths_marks+s[i].phy_marks;
		
		pr=(total*100)/300;
		
		printf("percentage is %d  \n\n",pr);
	}
}
