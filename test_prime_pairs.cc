#include <assert.h>
#include <climits>
#include <stdio.h>
#include <pthread.h>
#include <vector>

#include "is-prime.h"

using std::vector;

const int kNumThreads = 8;

namespace twin_primes {

void TestAndMaybePrint(int n) {
	if (is_prime(n) && is_prime(n + 2)) {
		printf("%d and %d\n", n, n + 2);
	}
}

void* FindTwinPrimes(void* thread_id) {
	const int start_offset = 3 + 2 * (long)thread_id;
	const int delta = 2 * kNumThreads;
	for (int i = start_offset; i < INT_MAX; i += delta) {
		TestAndMaybePrint(i);
	}
	pthread_exit(NULL);
}

}  // namespace twin_primes

int main(int argc, char* argv[]) {
	vector<pthread_t> threads(kNumThreads);
	
	for (int i = 0; i < kNumThreads; i++) {
		int res = pthread_create(&threads[i], NULL, twin_primes::FindTwinPrimes, (void *)i);
		assert(!res);
	}

	pthread_exit(NULL);
}
