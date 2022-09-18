#include <iostream>

int main(int argc, char* argv[]) {
	int x = 0;
	int temp = 0;
	std::cin >> x;
	temp = x * x;
	std::cout << (temp + 1) * (temp + x) + 1;
	return EXIT_SUCCESS;
}