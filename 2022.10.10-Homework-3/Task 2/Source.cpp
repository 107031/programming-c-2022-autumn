#include <iostream> 

int main(int argc, char* argv[]) {
	int n = -1;
	int k = 0;
	while (n != 0) {
		std::cin >> n;
		if (n < 0 && n % 2 != 0) {
			k++;
		}
	}
	std::cout << k;
	return EXIT_SUCCESS;
}