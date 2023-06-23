#include<stdio.h>
#include<conio.h>

struct emp
{
	int id;
	char name[10];
	int salary;
	int grade;
}s[20];

void main()
{
	int i,n;
	clrscr();
	printf("\n Enter No For Take Record : ");
	scanf("%d",&n);
	printf("\n Enter Detail : ");

	for(i=0;i<n;i++)
	{
		printf("\n Enter ID : ");
		scanf("%d",&s[i].id);
		printf("\n Enter Name : ");
		scanf("%d",&s[i].name);
		printf("\n Enter Salary : ");
		scanf("%d",&s[i].salary);
		printf("\n Enter Grade : ");
		scanf("%d",&s[i].grade);
	}

	printf("\n ID");

}

