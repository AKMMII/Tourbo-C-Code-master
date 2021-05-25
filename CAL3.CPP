#include<stdio.h>
#include<conio.h>
main()
{
int x;
float a,b;
float c,d,e,f;
clrscr();
printf("Enter two Number     ");
scanf("%f%f",&a,&b);
printf("\n\nAddition=1");
printf("\n\nSubtraction=2");
printf("\n\nMultiplication=3");
printf("\n\nDivision=4");
scanf("%d",&x);

c=a+b;
d=a-b;
e=a*b;
f=a/b;

switch (x)
{case 1: printf("\n\nThe Sum is %f",c);
	break;
case 2 : printf("\n\nThe Sun is %f",d);
	break;
case 3 : printf("\n\nThe Multi is %f",e);
	break;
case 4 : printf("\n\nThe Division is %f",f);
	break;
}
 getch();

return 0;
}