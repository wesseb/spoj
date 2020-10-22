#include <stdio.h>

int main(void) {

	unsigned int t,n;
	long long int silnia = 1;
	long long int wyniki[30];

	scanf("%d", &t);

	if (t < 1) {
		return 0;
	} else if (t > 30) {
		return 0;
	}

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);

		for (int j = n; j > 1; j--) {
			silnia = silnia * j;
		}

		wyniki[i] = silnia;
	}

	for (int i = 0; i < t; i++) {

		printf("%lld %lld", wyniki[i]/10%10, wyniki[i]%10);
		putchar('\n');
	}

	return 0;
}
