all:		test_prime_pairs is-prime_test

is-prime_test: is-prime_test.cc is-prime.cc is-prime.h
	g++ -Wall -g -O2 -o is-prime_test is-prime_test.cc is-prime.cc

test_prime_pairs:	test_prime_pairs.cc is-prime.h is-prime.cc
		g++ -Wall -g -O2 -lpthread -o test_prime_pairs test_prime_pairs.cc is-prime.cc
