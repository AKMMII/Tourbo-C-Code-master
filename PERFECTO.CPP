			//WAP TO CHECK THE NUMBER IS PERFECT OR NOT
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,sum =0;
clrscr();
printf("Give Number to be checked for Perfect\n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
sum=sum+i;
}
if(sum==n)
printf("Given Number %d is perfect\n",n);
else
printf("Given Number %d is not Perfect\n",n);
getch();
}

