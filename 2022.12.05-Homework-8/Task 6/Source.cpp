#include <iostream>
#include <string>

int MaxDigit(std::string str) {
	if (str.length() == 1) {
		return (int)str[0] - '0';
	}
	int tmp = MaxDigit(str.substr(1));
	return ((int)str[0] - '0' > tmp ? (int)str[0] - '0' : tmp);
}

int main(int argc, char* argv[]) {
	std::string str = "";
	std::cin >> str;
	std::cout << MaxDigit(str);
	return EXIT_SUCCESS;
}