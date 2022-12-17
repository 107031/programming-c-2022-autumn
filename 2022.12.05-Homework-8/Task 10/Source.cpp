#include <iostream>

int array[1000000]{ 0 };

int DeletingBranch(int n) {
	if (array[n] == -1) {
		return 1;
	}
	else {
		return DeletingBranch(array[n]) + 1;
	}
}

int main(int argc, char* argv[]) {
	int n = 0;
	int k = 0;
	int l = 0;
	int d = 0;
	for (int i = 0; i < 1000000; i++) {
		array[i] = -1;
 	}
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> k >> l;
		array[l] = k;
	}
	std::cin >> n;
	std::cout << DeletingBranch(n);
	return EXIT_SUCCESS;
}