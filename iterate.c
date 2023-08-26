#include<stdio.h>

int main(void)
{
	char* itr[]= {"add item", "remove item", "view cart", "total", "quit"};
	int i, choice, n, I = 0;
	int costs[50][50];
	char items[50][50];


	for (i = 0; i < 5; i++)
		printf("%d. %s\n", i, itr[i]);

	choice = 9;
	while (choice != 4)
	{
		printf("\nchoose a number (if you want to see menu press 8): ");
		scanf("%d", &choice);

		if (choice == 0)
			{
				printf("enter an item: ");
				scanf ("%s", items[I]);
				printf ("enter cost: ");
				scanf ("%ls", costs[I]);
				I++;
				printf ("item has been added.\n");
			}
		else if (choice == 2 )
		{
			n =sizeof(items);
			printf ("item(s) in your cart is:\n");
			for (i = 0; i <= 5 ; i++)
				printf("%d. %s  ==== #%ls\n", i, items[i], costs[i]);
		}

		else if (choice == 8)
		{
			for (i = 0; i < 5; i++)
			{
				 printf("%d. %s\n", i, itr[i]);
			}
		}
	}
	return 8;
}
