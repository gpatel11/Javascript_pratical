#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,j,a[3][3],b[3][3];
	 clrscr();
	 for(i=0; i<3; i++)
	 {
		for(j=0;j<3;j++)
		{
		    scanf("%d",&a[i][j]);
		    scanf("%d",&b[i][j]);
		}
	 }

		 for(i=0; i<3; i++)
	 {
		for(j=0;j<3;j++)
		{
		    printf("%d",a[i][j]);
		}
		printf("\n");
	 }

		 for(i=0; i<3; i++)
	 {
		for(j=0;j<3;j++)
		{
		    printf("%d",b[i][j]);
		}
		printf("\n");
	 }

		 for(i=0; i<3; i++)
	 {
		for(j=0;j<3;j++)
		{
		    printf(" %d",a[i][j]+b[i][j]);
		}
		printf("\n");
	 }

			  getch();
}