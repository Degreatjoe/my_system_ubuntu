#include <stdio.h>

int main(void)
{
	/*char mine[5] = "dog";*/
	char inp[5];




	printf("guess my favourite animal? ");
	scanf("%s", inp);
	while (inp != "quit")
	{
		 if (inp == "dog")
		 {
			 printf("correct!!, dog is my favourite animal.");
		 }
		 else
		 {
			 printf("o ooh thats not my favourite animal try again\n");
		 }
	}

	return 0;
}
