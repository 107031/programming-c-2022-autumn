#include <iostream>
#include <string>

std::string Reversal(int n, int array[]) {
	if (n == 1) { return std::to_string(array[0]); }
	return std::to_string(array[n - 1])+ " " + " " + (Reversal(n - 1, array));
}

int main(int argc, char* argv[]) {
	int n = 0;
	int array[1000]{ 0 };
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> array[i];
	}
	std::cout << Reversal(n, array);
	return EXIT_SUCCESS;
}