#include <iostream>

int main(int argc, char* argv[]) {
	int x = 0;
	int ans = 0;
	int temp = 1;
	std::cin >> x;
	for (int i = 0, j = 0; x > 0; i++) {
		for (temp = 1, j = 0; j < i; j++) {
			temp *= 2;
		}
		ans += (x % 10 == 1 )? temp : 0;
		x /= 10;
 	}
	std::cout << ans;
	return EXIT_SUCCESS;
}