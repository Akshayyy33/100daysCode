//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
#include<conio.h>
int main()
{
	int l,b;
	int area,per;
	printf("Enter lenght of rectangle : \n");
	scanf("%d", &l);
	printf("Enter breadth of rectangle : ");
	scanf("%d", &b);
	area = l * b;
	per= 2 * (l+b);
	printf(" \n Area of rectangle is : %d", area );
	printf(" \n Perimeter of rectangle is : %d", per);
	return 0;		
}

