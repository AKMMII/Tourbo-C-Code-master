//WAP to find Person is eligible or not eligible to vote

#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("Give age Value\n");
scanf("%d",&age);
if(age >= 18)
printf("Person is Eligibal to Vote\n");

else
printf("Person is not eligible to vote\n");

getch();
}