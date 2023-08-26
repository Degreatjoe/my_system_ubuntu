#include<stdio.h>

/*
 * main - to take usre input scores, print the sum and
 * calculate the average score.
 * REturn: 0 success
 */
int main(void)
{
	float subject;
	float scores[20];
	char grade[] = {'A','B','C','D','E','F'};

	printf("how many subjects do yo offer? \n");
	scanf("%f", &subject);

	int i;
	int sum;
	for (i = 0; i < subject; i++)
	{
		printf("enter score!(enter one subject score and press ok) \n");
		scanf("%f", &scores[i]);
		sum += scores[i];
	}

	printf("sum = %d.\n", sum);
	float average = sum / subject;
	printf("average = %.2f.\n", average);
	if (average >= 70)
		printf("grade: %c.\ncongratulations!!.\n", grade[0]);
	else if (average >= 60)
		printf("gradeL: %c.\nccongratulations!\n", grade[1]);
	else if (average >= 50 )
		printf("grade: %c.\npassed!! put in more effort.\n", grade[2]);
	else if (average >= 40)
		printf("grade: %c.\npassed! put in more effort.\n", grade[3]);
	else if (average >= 30)
		printf("grade: %c.\nthis is poor! we know you can do better.\n", grade[4]);
	else
		printf("grade: %c.\nfail!! repeat.\n", grade[5]);


	return 0;
}
