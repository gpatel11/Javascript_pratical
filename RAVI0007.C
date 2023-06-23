#include<stdio.h>
#include<conio.h>
void main()
{       int s_n,l_n=10;
	clrscr();
	printf("Enetr the stop number=");
	scanf("%d",&s_n);
	while(s_n<=l_n)
	{
	if(s_n==l_n)
	{
	 continue;
	}
	   printf("\n%d",s_n++);
	}
	getch();
}