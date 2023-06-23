/*       *
       *   *
     *   *   *
   *   *   *   *    */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j,k;
clrscr();
printf("\n Enter n values=");
scanf("%d",&n);
for(i=n; i>=1; i--)
{
  for(k=1; k<=i; k++)
  {
    printf(" ");
  }
  for(j=n; j>=i; j--)
  {
   printf(" *");
  }
 printf("\n");
}

getch();
}