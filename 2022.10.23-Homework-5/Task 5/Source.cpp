#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[1000]{ 0 };
	int x = 0;
	int min = 1000;
	int ans = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::cin >> x;
	for (int i = 0, temp = 0; i < n; i++) {
		temp = x - a[i];
		if (min > (((temp % 2) + ((temp + 1) % 2)) % 2) * temp) {
			min = (((temp % 2) + ((temp + 1) % 2)) % 2) * temp;
			ans = a[i];
		}
	}
	std::cout << ans;
	return EXIT_SUCCESS;
}