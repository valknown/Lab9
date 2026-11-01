#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int task1(void);
int task2(void);

int main(void) {
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2();
	return 0;
}

int task1(void) {
	int row, col;
	printf("\n");
	for (row = 1; row <= 9; ++row) {
		for (col = 1; col <= row; col++) {
			printf("%5d", col * row);
		}
		printf("\n");
	}

	printf("\n");

	for (row = 0; row < 5; row++)
	{
		for (col = 0; col < 5 - row; col++)
		{
			printf("%5d", (20 - row) + col);
		}

		printf("\n");
	}
	printf("\n");
	return 0;
}

int task2(void) {

    char a;

    do {
        int c;
        int count = 0;

        printf("Введите число: ");

        while ((c = getchar()) != '\n') {
            if (c >= '0' && c <= '9') {
                if (c > '5') {
                    count++;
                }
            }
        }

        printf("Количество цифр больше 5: %d\n", count);

        printf("Повторить? (y - да, другой символ - нет): ");
        scanf(" %c", &a);

		while ((c = getchar()) != '\n');

	} while (a == 'y');

    return 0;
}
