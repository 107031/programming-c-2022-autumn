#include <iostream> 

int main(int argc, char* argv[]) {
	int n = 0;
	int temp = 0;
	std::cin >> n;
	temp = (((n % 2) + ((n + 1) % 2)) % 2) * n;
	std::cout << n + (2 - temp % 2);
	return EXIT_SUCCESS;
}