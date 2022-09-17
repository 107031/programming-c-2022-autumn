#include <iostream> 

int main() {
	int n = 0, temp = 0;
	std::cin >> n;
	temp = (((n % 2) + ((n + 1) % 2)) % 2) * n;
	std::cout << n + (2 - temp % 2);
	return 0;
}