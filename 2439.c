#include <stdio.h>
int main(void)
{
	int i, j, k, num;
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (k = 1; k <= num - i; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}