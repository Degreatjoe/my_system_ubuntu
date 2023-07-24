#include <stdio.h>
/**
 * main - to determine if a user can qualify for a loan.
 * Return: always 0
 */

/**
 * First, ask for a rating from 1–10 on the following:
 * •	How large is the loan?
 * •	How good is your credit history?
 * •	How high is your income?
 * •	How large is your down payment?
 */
int main(void)
{
	float loan_size;
	float credit_history;
	float income_stat;
	float down_payment;


	printf("\nwelcome to DEJOE'S loaning platform.");
	printf("\nplease provide the following information.\n");

	printf("\nfrom 1-0, how large is the loan? ");
	scanf("%f", &loan_size);

	printf("\nfrom 1-10 how good is your credit history? ");
	scanf("%f", &credit_history);

	printf("\nfrom 1-10 how high is your income? ");
	scanf("%f", &income_stat);

	printf("\nfrom 1-10 how large is your down payment? ");
	scanf("%f", &down_payment);

	/**
	 * •	First, check if the loan size is at least 5.
	 * If it is, use the following rules:
	 * 	If the credit history and income are both at least 7,
	 *	 then the decision is "yes"
	 * /
	 */
	if (loan_size >= 5)
	{
		if (credit_history >= 7 && income_stat >= 7)
		{
			printf("Congratulations!! you qualify for the loan.\n");
		}

		/**
		 * 	If either the credit history or income is at least 7,
		 *	 then check if the down payment is at least 5, 
		 *	if it is, the decision is "yes", if not, the decision is "no"
		 */
		else if (credit_history >= 7 || income_stat >= 7)
		{
			if (down_payment >= 5)
			{
				printf("Congratulations!! you qualify for the loan.\n");
			}
			else 
			{
				printf("Sorry you do not qualify.\n");
			}
		}

		/**	Otherwise (if neither the credit history nor income
		 *      is at least 7), the decision is "no"
		 */

		else
		{
			printf("Sorry you do not qualify.\n");
		}
	}

	/**	Otherwise (if the loan is not 5 or greater), use these rules:
		o	If the credit is less than 4, then the decision is "no"
		*/


	else
	{
		if (credit_history < 4)
		{
			printf("Sorry you do not qualify.\n");
		}

		/**	Otherwise, check the following:
		*		If either the income or the down payment is at least
		*      	7, the decision is "yes"
		*/
		else if (credit_history == 4)
		{
			if (income_stat >= 7 || down_payment >= 7)
			{
				printf("you qualify.\n");
			}
			else if (income_stat >=4 && down_payment >= 4)
			{
				printf("you qualify.\n");
			}
		}
		else
		{
			printf("you do not qualify.\n");
		}
	}

			


	return 0;
}
