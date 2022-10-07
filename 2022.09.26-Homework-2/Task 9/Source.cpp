#include <iostream> 

int main(int argc, char* argv[]) {
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;
	std::cin >> M >> N >> x >> y;
	if (y > 1) {
		std::cout << x << " " << y - 1 << "\n";
	}
	if (x < M) {
		std::cout << x + 1 << " " << y << "\n";
	}
	if (y < N) {
		std::cout << x << " " << y + 1 << "\n";
	}
	if (x > 1) {
		std::cout << x - 1 << " " << y << "\n";
	}
	return EXIT_SUCCESS;
}