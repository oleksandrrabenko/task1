#include <stdio.h>

double hours_for_three_people(int t1, int t2, int t3);

int main(void)
{
	int t1, t2, t3, max = 10000;
	double res;

	printf("Введіть три цілі числа через пробіл: ");
	if (scanf("%d %d %d", &t1, &t2, &t3) != 3) {
		printf("Некоректні дані\n");
		return 1;
	}

	if(t1 <= 0 || t2 <= 0 || t3 <= 0) {
		printf("Час має бути більше нуля\n");
		return 1;
	} else if(t1 > max || t2 > max || t3 > max) {
		printf("Значення перевищило ліміт в %d\n", max);
		return 1;
	}

	res = hours_for_three_people(t1, t2, t3);

	printf("Для трьох гостей потрібно %.2f годин\n", res);

	return 0;
}

double hours_for_three_people(int t1, int t2, int t3) {
	return 1.0 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3);
}
