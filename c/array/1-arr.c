#include<stdio.h>

/*
 * main - to store the score of five subject in an array and
 *  print the average score of the student.
 *  Return : 0 sucess
 */
int main(void)
{
	int scores[5]= {50,80,70,32,21};

	int sum = scores[0] + scores[1] + scores[2] + scores[3] + scores[4];
	printf("the sum is %d.\n", sum);
	int average = sum / 5;
	printf("your average score is %d.\n", average);

	return 0;
}
