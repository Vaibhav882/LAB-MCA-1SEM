#include<stdio.h>
#include<conio.h>
void main()
{
int age;
float amount;
char gender,smoker;
clrscr();
printf("enter your age\n");
scanf("%d",&age);
printf("enter your gender m for male and f for female\n");
fflush(stdin);
scanf("%c",&gender);
printf("if you are smoker and if not\n");
fflush(stdin);
scanf("%c",&smoker);
if(age>=21 && age<=30)
{
amount=1000;
}
else if(age>=31 && age<=40)
{
amount=15000;
}
else if(age>=41 && age<=50)
{
amount=20000;
}
else if(age>=51 && age<=60)
{
amount=40000;
}
else
{
printf("insurance not possible\n");
getch();
}
if(gender=='m' && smoker=='y')
{
amount=amount+((amount*10)/100.00);
}
else if(gender=='f' && smoker=='n')
{
amount=amount-((amount*10)/100.00);
}
printf("insurance amount is %f",amount);
getch();
}

