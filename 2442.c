#include <stdio.h>
int main(void)
{
	int i, j, k, num;
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (k = 1; k < num - i; k++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}