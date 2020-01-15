/***********************************************************************
@Title Lab0
@Purpose To calculate the area and perimeter of a rectangle, area of a
triangle and the radius of a circle.
@(Byrd, Jessica)
@Date 01/28/2019
@Version 1.0
************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void Rectangle();
void Triangle();
void Circle();

int main()
{
	Rectangle();
	Rectangle();
	Triangle();
	Triangle();
	Circle();
	Circle();

	return 0;

}

void Rectangle()
{
	float lengthOfRectangle;
	float widthOfRectangle;
	float areaOfRectangle;
	float perimeterOfRectangle;
	

	printf("\nEnter the length of your rectangle: ");
	scanf("%f", &lengthOfRectangle);

 	printf("\nEnter the width of your rectangle: ");
	scanf("%f", &widthOfRectangle);

	areaOfRectangle = (lengthOfRectangle * widthOfRectangle);
	printf("\nThe area of your rectangle is: %0.3f", areaOfRectangle);

	perimeterOfRectangle = (2 * (lengthOfRectangle + widthOfRectangle));
	printf("\nThe perimeter of your rectangle is: %.3f\n",
	perimeterOfRectangle);

}

void Triangle()
{
	double triangleBase;
	double triangleHeight;
	double areaOfTriangle;

	printf("\nEnter the width of your triangle: ");
	scanf("%lf", &triangleBase);

	printf("\nEnter the height of your triangle: ");
	scanf("%lf", &triangleHeight);

	areaOfTriangle = ((triangleBase * triangleHeight) / 2);

	printf("\nThe area of your triangle is: %0.3lf" , areaOfTriangle);

	printf("\n");

}

void Circle()
{
	float areaOfCircle;
	float radiusOfCircle;
	float pi = 3.141;

	printf("\nEnter the radius of your circle: ");
	scanf("%f", &radiusOfCircle);

	areaOfCircle = (pi *(radiusOfCircle * radiusOfCircle));
	printf("\nThe radius of your circle is: %0.3f", areaOfCircle);

	printf("\n");
}
