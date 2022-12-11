#include <iostream>
#include <string>

std::string ExpandTheBrackets(std::string str) {
	if (str.length() == 1) {
		return "(" + str + ")";
	}
	else if (str.length() == 2) {
		return "(" + str + ")";
	}
	return 
		"(" + 
		std::string(1, str[0]) + 
		ExpandTheBrackets(str.substr(1, str.length() - 2)) + 
		std::string(1, str[str.length() - 1]) + 
		")";
}

int main(int argc, char* argv[]) {
	std::string str = "";
	std::cin >> str;
	std::cout << ExpandTheBrackets(str);
	return EXIT_SUCCESS;
}