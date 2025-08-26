//Write a program to input two numbers and display their sum.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter a number : \n");
	scanf("%d", &a);
	printf("Enter a number : \n");
	scanf("%d", &b);
	printf("Sum of these 2 numbers is : %d", a+b);
	getch();
	return 0;
}
