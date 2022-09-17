#include <iostream>

int main() {
	int a = 0, b = 0, temp = 0;
	std::cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	std::cout << "a = " << a << " b = " << b;
	return 0;
}