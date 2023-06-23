#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j,k;
clrscr();
printf("\n Enter n values= ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
  for(k=1; k<=n-i; k++)
  {
   printf(" ");
  }
  for(j=1; j<=i; j++)
  {
    if(i%2==0)
    {
     printf(" +");
    }
    else
    {
     printf(" *");
    }
  }
  printf("\n");
}
getch();
}