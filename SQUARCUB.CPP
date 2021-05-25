//Squre ,Cube for Numbers
#include<stdio.h>
#include<conio.h>
main()
{
int i;
int sq, cu;
clrscr();
printf("Number\tSquare\tCube\n");
printf("=====\t=====\t=====\n");
for(i=1;i<=20;i++)

{
sq=i*i;
cu=sq*i;
printf("%d\t%d\t%d\n",i,sq,cu);
}
getch();
return 0;
}

