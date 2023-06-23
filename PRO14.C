//  1,0,1,0,1,0,1,0.........N.

#include<stdio.h>
#include<conio.h>

 void main()
 {
 int i,n,j;
 clrscr();
 printf("\n Enter the number=");
 scanf("%d",&n);
 for(i=1; i<=n; i++)
  {
    for(j=1; j<=n; j++)
     {
	if(j%2==0)
	{
	  printf(" 0");
	}
	else
	{
	  printf(" 1");
	}
     }
  }
 getch();
 }