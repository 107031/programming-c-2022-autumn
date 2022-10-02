#include <iostream> 

int main(int argc, char* argv[]) {
	float x = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a >> b >> c >> d;
	if (a != 0 && b != 0 && d != 0 && c != 0) {
		if (-b / a == -d / c) {
			std::cout << "NO";
		}
		else {
			std::cout << -b / a;
		}
	}
	else if ( )
	return EXIT_SUCCESS;
}