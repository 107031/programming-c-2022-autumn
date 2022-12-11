#include <iostream>
#include <string>

std::string InsertTheAsterisks(std::string str) {
	if (str.length() == 1) {
		return str;
	}
	if (str.length() == 2) {
		return str.insert(1, "*");
	}
	std::string tmp = InsertTheAsterisks(str.substr(1));
	return std::string(1, str[0]) + "*" + tmp;
}

int main(int argc, char* argv[]) {
	std::string str = "";
	std::cin >> str;
	std::cout << InsertTheAsterisks(str);
	return EXIT_SUCCESS;
}