#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=15,l=0,count=0;
	clrscr();
	{
	do
	{
	printf("Enter the number=");
	scanf("%d",&n);
	count++;
	if(n>a)
	{
	printf("\n Your number is big");
	}
	else if(n<a)
	{
	 printf("\n Your number is small");
	}
	else
	{
	 printf("\nyou are winning");
	 //l++;
	 break;
	 }
       }
       while(n!=a);
       printf("\n you are tye %d time",count);
       }
       getch();
  }
