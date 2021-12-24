#include <stdio.h>
int main(void)
{
	int num;
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) 
	{
		for (int k = 0; k < i; k++) {
			printf(" ");
		}
		for (int j = 0; j < 2*(num-i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i < num; i++)
	{
		for (int k = 1; k < num - i; k++)
		{
			printf(" ");
		}
		for (int j = 0; j < (2 * i)+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}