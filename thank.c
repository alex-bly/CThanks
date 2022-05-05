#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
	srand(time(0));
	int num = (rand() % (100 + 1));

	if (num < 50)
	{
		printf("You're Welcome\n");
	}
	else
	{
		printf("No Problem\n");
	}
}
