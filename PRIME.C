#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,i,c=0;
printf("Enter a number : ");
scanf("%d", &a);
fflush(stdin);
for(i=1;i<=a;i++)
if(a%i==0)
{
c++;
}
if(c<=2)
{
printf("Prime");
}
else
{
printf("Not Prime");
}
getch();
}