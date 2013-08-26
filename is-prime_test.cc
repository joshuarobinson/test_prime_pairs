#include <stdio.h>

#include "is-prime.h"

void expect_prime(int n) {
	bool result = is_prime(n);
	if (result != true) {
		fprintf(stderr, "Test Failure. Expected %d to be prime.\n", n);
	}
}

void expect_nonprime(int n) {
	bool result = is_prime(n);
	if (result != false) {
		fprintf(stderr, "Test Failure. Expected %d to be non-prime.\n", n);
	}
}

int main(int argc, char **argv) {
	expect_prime(5);
	expect_prime(7);
	expect_prime(101);
	expect_prime(103);

	expect_nonprime(10);
	expect_nonprime(4);
	expect_nonprime(33 * 11);
	expect_nonprime(1e4);

	printf("Tests complete.\n");
	return 0;
}
