#include <iostream>

int main() {
	int n = 0;
	std::cin >> n;
	std::cout << "The next number for the number " << n << " is " << n + 1 <<"\n";
	std::cout << "The previous number for the number " << n << " is " << n - 1;
	return 0;
}