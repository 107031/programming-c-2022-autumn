#include <iostream>

int main() {
	int n = 0, ans = 0;
	std::cin >> n;
	ans = (n / 100) + (n / 10 % 10) + (n % 10);
	std::cout << (((ans % 2) + ((ans + 1) % 2)) % 2) * ans;
	return 0;
}