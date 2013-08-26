all:		test_prime_pairs is-prime_test

is-prime_test: is-prime_test.cc is-prime.cc is-prime.h
	g++ -O2 -o is-prime_test is-prime_test.cc is-prime.cc

test_prime_pairs:	test_prime_pairs.cc is-prime.h is-prime.cc
		g++ -O2 -o test_prime_pairs test_prime_pairs.cc is-prime.cc
