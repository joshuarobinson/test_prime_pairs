#include <climits>
#include <stdio.h>

#include "is-prime.h"

int main(int argc, char* argv[]) {
	printf("Hello, world!\n");

	for (int i = 3; i < INT_MAX; i += 2) {
		if (is_prime(i) && is_prime(i + 2)) {
			printf("%d and %d\n", i, i + 2);
		}
	}

	return 0;
}
