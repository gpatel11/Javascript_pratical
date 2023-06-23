// sum of n number with while (1+2+3+4+5= 21)
#include<stdio.h>
#include<conio.h>
 void main()
 {
  int s=0,i=1,n;
  clrscr();
  printf("\n Enter the number=");
  scanf("%d",&n);

  while(i<=n)
  {
   s=s+i;
   i=i+1;
  }
  printf("\n\n Sum of n nuber is = %d",s);
  getch();

 }