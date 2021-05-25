#include<stdio.h>
#include<conio.h>     //for number pattern ("%d",j);
main()
{
int i,j;
clrscr();

for(i='A';i<='Z';i++) // i=n;i>=0;i--     //i=1;i<=n;i++
{
for(j='A';j<=i;j++)
printf("%c",j);
printf("\n");
}getch();
return 0;

}