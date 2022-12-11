#include <iostream>

bool CanIGetN(int n) {
	if (n == 1) {
		return true;
	}
	else if (n < 2) {
		return false;
	}
	return CanIGetN(n - 5) || CanIGetN(n - 3);
}

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	std::cout << (CanIGetN(n) ? "Yes" : "No");
	return EXIT_SUCCESS;
}