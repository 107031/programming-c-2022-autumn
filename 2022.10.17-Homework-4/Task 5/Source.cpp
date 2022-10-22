#include <iostream> 

int main(int argc, int argv[]) {
	int n = 0;
	double sum = 1;
	double temp = 1;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		temp *= i;
		sum += 1 / temp;
	}
	std::cout << sum;
	return EXIT_SUCCESS;
}