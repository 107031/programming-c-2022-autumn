#include <iostream>
int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	double ans = 0;
	std::cin >> a >> b >> c >> d;
	if ((a == 0) && (b == 0)) {
		std::cout << "INF";
	}
	else if (b == 0) {
		std::cout << "0";
	}
	else if (a == 0) {
		std::cout << "NO";
	}
	else {
		ans = -b / a;
		if (std::round(ans) == ans && -d / c != ans) {
			std::cout << ans;
		}
		else {
			std::cout << "NO";
		}
	}
	return 0;
}