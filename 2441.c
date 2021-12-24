#include <stdio.h>
int main(void)
{
	int i, j, k, num;
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (k = 1; k < i; k++)
		{
			printf(" ");
		}
		for (j = 0; j <= num - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}