all:		test_prime_pairs

test_prime_pairs:	test_prime_pairs.cc
		g++ -O2 -o test_prime_pairs test_prime_pairs.cc
