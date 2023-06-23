
//printing reverse number with array

#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],n,i;
 clrscr();
 printf("\n Enter the number");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=n-1; i>=0; i--)
 {
    printf("\n%d",a[i]);
 }
 getch();
 }
