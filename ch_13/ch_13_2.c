#include<stdio.h>

struct employee
{
	int id;
	char name[100];
	int age;
	char role[100];
	char city[50];
	int exp;
	char company_name[50];
}s[50];

main()
{
	int i,n;
	
	printf("enter the number of employee:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter your id:");  
		scanf("%d",&s[i].id);
		
		printf("enter your name:");  
		scanf("%s",&s[i].name);
		
		printf("enter your age:");  
		scanf("%d",&s[i].age);
		
		printf("enter your role:");  
		scanf("%s",&s[i].role);
		
		printf("enter your city:");  
		scanf("%s",&s[i].city);
		
		printf("enter your experience:");  
		scanf("%d",&s[i].exp);
		
		printf("enter your company name:");  
		scanf("%s",&s[i].company_name);
	}
	
	for(i=0;i<n;i++)
	{
		
		
		printf("id: %d\n",s[i].id);
		printf("name: %s\n",s[i].name);
		printf("age: %d\n",s[i].age);
		printf("role: %s\n",s[i].role);
		printf("city: %s\n",s[i].city);
		printf("experience: %d\n",s[i].exp);
		printf("company name: %s\n\n\n\n",s[i].company_name);
		
		
		
	}
	
}
