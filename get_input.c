#include <stdio.h>
/**
 * main - to get user age input and print their birthday of the following year
 * Return: 0.
 */
int main(void)
{
	int age;
	int new_age;

	printf("how old are you: ");
	scanf("%d", &age);
	new_age = age + 1;

	printf("you would be %d years old on your next birthday\n", new_age);
	return (0);
}
