// Passing Values from Array to Pointer

#include<stdio.h>
#include<conio.h>
void main()
{
int i,*p;
int arr[5]={5,10,15,20,25};
p=arr;
clrscr();
for(i=0;i<5;i++)
{
printf("Address : %p %p %p %p\n",&arr[i],arr+i,p+1,&p[i]);
printf("Value = %d %d %d %d \n", arr[i],*(p+i),*(arr+i),p[i]);
}
getch();
}