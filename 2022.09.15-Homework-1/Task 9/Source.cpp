#include <iostream>

int main() {
	int x = 0, temp = 0;
	std::cin >> x;
	temp = x * x;
	std::cout << (temp + 1) * (temp + x) + 1;
	return 0;
}