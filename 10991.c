#include <stdio.h>
int main(void)
{
	int num;
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		for (int k = 0; k < num - i; k++) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}