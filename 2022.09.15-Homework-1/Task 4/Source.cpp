#include <iostream>

int main(int argc, char* argv[]) {
	int v = 0;
	int t = 0;
	int ans = 0;
	const unsigned int length = 109;
	std::cin >> v >> t;
	ans = length - ((((v % 2) + ((v + 1) % 2)) % 2) * v * t);
	std::cout << (((ans % 2) + ((ans + 1) % 2)) % 2) * ans;
	return EXIT_SUCCESS;
}