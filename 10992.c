#include <stdio.h>
int main()
{
	int num = 0;
	scanf_s("%d", &num);

	for (int i = 1; i < num; i++)
		printf(" ");
	printf("*");
	printf("\n");

	for (int i = 2; i <= num - 1; i++)
	{
		for (int j = 1; j <= num - i; j++)
			printf(" ");

		printf("*");

		for (int k = 1; k < 2 * i - 2; k++)
			printf(" ");

		printf("*");

		printf("\n");
	}
	
	if (num > 1)
	{
		for (int i = 1; i <= 2 * num - 1; i++)
			printf("*");
	}
	return 0;
}