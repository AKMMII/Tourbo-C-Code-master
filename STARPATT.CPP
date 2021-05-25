#include<stdio.h>
#include<conio.h>     //for number pattern ("%d",j);
main()
{
int i,j,n;
clrscr();
printf("How many lines?\n");
scanf("%d",&n);
for(i=n;i>=0;i--)        // i=n;i>=0;i--     //i=1;i<=n;i++
{
for(j=1;j<=i;j++)
printf("A");
printf("\n");
}getch();
return 0;

}