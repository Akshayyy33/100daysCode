//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
#include<conio.h>
int main()
{
	int radius;
	float area,circum;
	printf("Enter radius of circle : \n");
	scanf("%d", &radius);
	area = 3.14*radius*radius;
	circum = 2*3.14*radius;
	printf("\n Area = %f", area);
	printf("\n Circumference = %f", circum);
	getch();
	return 0;
}

