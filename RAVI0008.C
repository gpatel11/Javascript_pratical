#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,s;
	clrscr();
	printf("Enter Secid number=");
	scanf("%d",&s);
	while(i<=s;i++)
	{
	 if(i==s)
	 {
	  continue;
	 }
	 printf("\n%d",i);
	}

}