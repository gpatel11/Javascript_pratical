//   3*3 matrix

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,a[3][3],b[3][3];
 clrscr();
 printf("\n Enter first matrix of element=\n");

 for(i=0; i<3; i++)
 {
	for(j=0; j<3; j++)
	{
	  scanf("%d",&a[i][j]);
	}
 }

 printf("\n First matrix = \n");

  for(i=0; i<3; i++)
 {
	for(j=0; j<3; j++)
	{
	  printf(" %d",a[i][j]);
	}
	printf("\n");
 }



  printf("\n\n Enter second matrix of element=\n");

 for(i=0; i<3; i++)
 {
	for(j=0; j<3; j++)
	{
	  scanf("%d",&b[i][j]);
	}
 }

 printf("\n second matrix = \n");

  for(i=0; i<3; i++)
 {
	for(j=0; j<3; j++)
	{
	  printf("%d",b[i][j]);
	}
	printf("\n");
 }



 printf("\n\n multiplication of two matrix = \n");

  for(i=0; i<3; i++)
 {
	for(j=0; j<3; j++)
	{
	  printf(" %d",a[i][j]*b[i][j]);
	}
      printf("\n");
 }
 getch();
 }

