#include<stdio.h>

void main()
{
	char* element[5];
	

	{
	printf("what is your hair colour: ");
	scanf ("%s", element[0]);
	printf("what is your eye colour: ");
	scanf ("%s", element[1]);
	printf("what is your skin colour: ");
	scanf ("%s", element[2]);
	printf("what is your starting month: ");
	scanf ("%s", element[3]);
	}
	printf("hair: %s.\t eye: %s\n", element[0], element[1]);
	printf ("skin: %s.\t month: %s. \n", element[2], element[3]);
	return ;
}
