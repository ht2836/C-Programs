// A program to print the reverse of a 4-digit number.
#include<stdio.h>
#include<conio.h>
void main()
{
int num,d1,d2,d3,d4,sum;
printf("Enter a number : ");
scanf("%d",&num);
d1=num%10;
num=num/10;
d2=num%10;
num=num/10;
d3=num%10;
num=num/10;
d4=num%10;
num=num/10;
d1=d1*1000;
d2=d2*100;
d3=d3*10;
d4=d4*1;
sum=d1+d2+d3+d4;
printf("Reverse of the number is %d",sum);
}
