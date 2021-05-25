#include<stdio.h>
#include<conio.h>
main()
{
int x;
float a,b;
float c,d,e,f;
clrscr();
printf("Enter Two Numbers	");
scanf("%f%f",&a,&b);

printf("\n\nAddition       =1");
printf("\n\nSubtration     =2");
printf("\n\nMultipition    =3");
printf("\n\nDivition       =4");
scanf("%d",&x);
c=a+b;
d=a-b;
e=a*b;
f=a/b;

switch(x)
{
case 1:
printf("\n\nThe Sum is %f\n/n",c);
break;

case 2:
printf("\n\nThe Sub is %f\n\n",d);
break;

case 3:
printf("\n\nThe Mult is %f\n\n",e);
break;

case 4:
printf("\n\nThe Div is %f\n\n",f);
break;

default:
printf("\n\nAnswer Nahi Milega!\n\n");
	  }
getch();
return 0;

}