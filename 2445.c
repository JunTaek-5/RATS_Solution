#include <stdio.h>
int main() {
    int num;
    scanf_s("%d", &num);
    for (int i = 0; i < num; i++) 
    {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        for (int k = 0; k < 2 * (num - i - 1); k++) {
            printf(" ");
        }
        for (int l = 0; l < i + 1; l++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < num; i++) {
        for (int j = num; j > i; j--) {
            printf("*");
        }
        for (int k = 1; k < i*2+1; k++) {
            printf(" ");
        }
        for (int j = num; j>i; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}