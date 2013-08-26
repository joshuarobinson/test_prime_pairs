
bool is_prime(int n) {
	if (n < 2)
		return false;

	if (n % 2 == 0)
		return false;

	for (int i = 3; i < n / 2; ++i) {
		if (n % i == 0)
			return false;
	}
	return true;
}
