// A program to take 2 integer values from the user and output the sum of them.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr(); //A function to clear the screen
int a,b,c; //Declaring global variables
printf("Enter the value for 'a' = "); //Printing a message to take the input from the user
scanf("%d",&a); //Scanning the input from the user
printf("Enter the value for 'b' = "); //Printing a message to take the input from the user
scanf("%d",&b); //Scanning the input from the user
c=a+b; //Adding values that were input by the user
printf("Sum of 'a' & 'b' = %d\n",c); //Printing the Sum of both the values that were input by the user
getch(); //Getting character to end the program
}