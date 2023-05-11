#include<stdio.h>

struct student
{
	int id;
	char name[100];
	int age;
	char course[100];
	char city[50];
	int std;
	char school[50];
}s[50];

main()
{
	int i,n;
	
	printf("enter the number of student:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter your id:");  
		scanf("%d",&s[i].id);
		
		printf("enter your name:");  
		scanf("%s",&s[i].name);
		
		printf("enter your age:");  
		scanf("%d",&s[i].age);
		
		printf("enter your course:");  
		scanf("%s",&s[i].course);
		
		printf("enter your city:");  
		scanf("%s",&s[i].city);
		
		printf("enter your std:");  
		scanf("%d",&s[i].std);
		
		printf("enter your school:");  
		scanf("%s",&s[i].school);
	}
	
	for(i=0;i<n;i++)
	{
		
		
		printf("id: %d\n",s[i].id);
		printf("name: %s\n",s[i].name);
		printf("age: %d\n",s[i].age);
		printf("course: %s\n",s[i].course);
		printf("city: %s\n",s[i].city);
		printf("std: %d\n",s[i].std);
		printf("school: %s\n\n\n\n",s[i].school);
		
		
		
	}
	
}
