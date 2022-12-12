#include <iostream>

bool IsItPrime(int n, int i = 2) {
	if (i * i > n) {
		return true;
	}
	else if (n % i != 0) {
		return IsItPrime(n, i + 1);
	}
	return false;
}

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	std::cout << (IsItPrime(n) ? "Prime" : "Composite");
	return EXIT_SUCCESS;
}