#include <iostream>
#include <string>

std::string ShortenLetters(std::string str) {
	if (str.length() == 1 || str.length() == 2) {
		return str;
	}
	else if (str[0] == str[str.length() - 1]) {
		return ShortenLetters(str.substr(1, str.length() - 2));
	}
	return 
		std::string(1, str[0]) + 
		ShortenLetters(str.substr(1, str.length() - 2)) + 
		std::string(1, str[str.length() - 1]);
}

int main(int argc, char* argv[]) {
	std::string str = "";
	std::cin >> str;
	std::cout << ShortenLetters(str);
	return EXIT_SUCCESS;
}