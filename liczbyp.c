#include <stdio.h>

int jest;

int liczbap(int n) {
	if (n < 2) {
		return jest = 0;
	}

	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) {
			return jest = 0;
		}
	}
	return jest = 1;
}

int main(void) {

	int t, liczba;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {

		scanf("%d", &liczba);

		if (liczba < 1) {
			return 0;
		} else if (liczba > 10000) {
			return 0;
		} else {
			printf("%s", liczbap(liczba) == 1 ? "TAK\n" : "NIE\n");
		}
	}

	return 0;
}
