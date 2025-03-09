/* hello.c */
#include <stdio.h>

int isLuckyNumber(int number) {
		int sumFirstHalf = 0, sumSecondHalf = 0;

		for (int i = 0; i < 3; i++) {
				sumFirstHalf += number % 10;
				number /= 10;
		}
		for (int i = 0; i < 3; i++) {
				sumSecondHalf += number % 10;
				number /= 10;
		}

		return sumFirstHalf == sumSecondHalf;
}

int main() {
		int count = 0;

		for (int number = 100000; number <= 999999; number++) {
				if (isLuckyNumber(number)) {
						printf("%d\n", number);
						count++;
				}
		}

		printf("Общее количество 'счастливых' номеров: %d\n", count);

		return 0;
}
