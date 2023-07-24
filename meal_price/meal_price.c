#include <stdio.h>
/**
 * main - Compute the price of a meal as follows by asking for the price of 
 * child and adult meals, the number of each, and then the sales tax rate.
 * Use these values to determine the total price of the meal.
 * Then, ask for the payment amount and compute the amount of change
 * to give back to the customer.
 * Return: 0 always
 */
int main(void)
{
	float price_of_child;
	float price_of_adult;
	float num_children;
	float num_adult;
	float tax_rate;
	float sum_children;
	float sum_adult;
	float subtotal;
	float st;
	float sales_tax;
	float total;
	float payment;
	float change;

	/** taking and storing input from user */
	printf("\nenter the price of a child's meal: ");
	scanf("%f", &price_of_child);

	printf("\nenter the price of an adult meal: ");
	scanf("%f", &price_of_adult);

	printf("\nhow many children? ");
	scanf("%f", &num_children);
	
	printf("\nhow many adult? ");
	scanf("%f", &num_adult);

	printf("\nwhat is the sales tax rate? ");
	scanf("%f", &tax_rate);

	/** calculating for the sub total of all meal*/
	sum_children = price_of_child * num_children;
	sum_adult = price_of_adult * num_adult;
	subtotal = sum_children + sum_adult;
	printf("\nsubtotal: #%.2f\n", subtotal);

	/** •	Compute and display the sales tax,*/
	
	st = ((tax_rate) / (float) 100);
	sales_tax = subtotal * st;
	printf("sales tax: #%.2f\n", sales_tax);

	/** * •    Compute and display the total price of the meal.*/
	total = subtotal + sales_tax;
	printf("total cost: #%.2f\n", total);

	/*•	Ask the user for the the payment amount */

	printf("how much are you paying? ");
	scanf("\n%f", &payment);

	/*•	Compute and display the change.*/
	
	change = payment - total;
	printf("change: #%.2f\n", change);
	
	return 0;
}
