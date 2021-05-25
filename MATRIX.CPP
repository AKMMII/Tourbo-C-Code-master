// WAP TO Print two matrix sum

#include<stdio.h>
#include<conio.h>
main()
{
int a[4] [4], b[4] [4], c[4] [4];
int m,n,p,q;
int i,j;
clrscr();
printf("Give Number Of Rows in First Matrix\n");
scanf("%d",&m);
printf("Give Number of Columns in First Matrix\n");
scanf("%d",&n);
printf("Give Number of Rows in First Matrix\n");
scanf("%d",&p);
printf("Give Number of Columns in First Matrix\n");
scanf("%d",&q);
if(m!=p|| n!=q)
	{
	printf("Size do not Match.Addtiton not Possible\n");
	return 0;
	}
printf("Enter Matrix A row-wise\n");
for(i=0;i<m;i++)
{
for(j=0;i<n;j++)
{
printf("a[%d][%d]=	",i,j);
scanf("%d",&a[i] [j]);
}
printf("\n");
}
printf("Enter Matrix B row-wise\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("b[%d][%d]=	",i,j);
scanf("%d",&b[i] [j]);
}
printf("\n");
}
printf("Matrix A \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("b[%d][%d]=	",i,j);
scanf("%4d",a[i] [j]);
printf("\n");
}
printf("Matrix B \n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("b[%d][%d]=	",i,j);
scanf("%4d",b[i] [j]);
printf("\n");
}
printf("\nSum Matrix C \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i] [j]=a[i] [j] + b[i] [j];
printf("%4d",c[i] [j]);
}
printf("\n");
}
getch();
}










