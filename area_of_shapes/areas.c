#include <stdio.h>
/**
 * main - Write a program to compute the areas of three different shapes.
 * Prompt for the necessary information, then compute and display the area.
 * 1.	Square — The area is the length of a side squared.
 * 2.	Rectangle — The area is the length multiplied by the width.
 * 3.	Circle — The area is Pi (you can use 3.14) multiplied by the radius squared.
 *
 *
 * Return: always 0
 */
int main(void)
{
	float square;
	float square_len;
	float rectangle;
	float rectangle_len, width;
	float circle_radius;
	float circle;
	float pi;
	float sq;

	pi = 3.14;
	
	/**this is for the area of a square*/
	printf("\n");
	printf("enter the length of the square: ");
	scanf("%f", &square_len);

	square = square_len * square_len;
	printf("the area of the square is %.2f\n", square);

	/** for the area of a rectangle*/
	printf("\n");

	printf("enter the length of the rectangle: ");
	scanf("%f", &rectangle_len);
	printf("enter the width of the rectangle: ");
	scanf("%f", &width);

	rectangle = rectangle_len * width;
	printf("the area of the rectangle is %.2f\n", rectangle);

	/**for the area of the circle*/
	printf("\n");

	printf("enter the radius of the circle: ");
	scanf("%f", &circle_radius);

	circle = circle_radius * circle_radius * pi;
	printf("the area of the circle is %.2f\n", circle);

	return 0;
}
