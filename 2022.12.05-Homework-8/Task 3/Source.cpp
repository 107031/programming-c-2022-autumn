#include <iostream> 

int BinomialCoefficient(int n, int k) {
	if (k == 0 || n == k) {
		return 1;
	}
	else {
		return BinomialCoefficient(n - 1, k - 1) + BinomialCoefficient(n - 1, k);
	}
}

int main(int argc, char* argv[]) {
	int n = 0;
	int k = 0;
	std::cin >> n >> k;
	std::cout << BinomialCoefficient(n, k);
	return EXIT_SUCCESS;
}