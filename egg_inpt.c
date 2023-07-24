#include <stdio.h>
/**
 * main - 2.	Prompt the user for the number of egg cartons they have. Assume each carton holds 12 eggs, multiply their number by 12, and display the total number of eggs
 * Return: always 0
 */
int main(void)
{
	int carton;
	int total_egg;

	printf("how many carton of eggs do you have: ");
	scanf("%d", &carton);

	total_egg = carton * 12;
	printf("that is %d eggs in total\n", total_egg);

	return 0;
}
