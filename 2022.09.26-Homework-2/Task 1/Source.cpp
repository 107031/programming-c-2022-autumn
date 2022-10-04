#include <iostream> 

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	switch (n / 100 % 10) {
	case (9):
		std::cout << "девятьсот ";
		break;
	case (8):
		std::cout << "восемьсот ";
		break;
	case (7):
		std::cout << "семьсот ";
		break;
	case (6):
		std::cout << "шестьсот ";
		break;
	case (5):
		std::cout << "пятьсот ";
		break;
	case (4):
		std::cout << "четыреста ";
		break;
	case (3):
		std::cout << "триста ";
		break;
	case (2):
		std::cout << "двести ";
		break;
	case (1):
		std::cout << "сто ";
		break;
	case (0):
		std::cout << "";
		break;
	}
	switch (n / 10 % 10) {
	case (9):
		std::cout << "девяносто ";
		break;
	case (8):
		std::cout << "восемьдесят ";
		break;
	case (7):
		std::cout << "семьдесят ";
		break;
	case (6):
		std::cout << "шестьдесят ";
		break;
	case (5):
		std::cout << "пятьдесят ";
		break;
	case (4):
		std::cout << "сорок ";
		break;
	case (3):
		std::cout << "тридцать ";
		break;
	case (2):
		std::cout << "двадцать ";
		break;
	case (1):
		switch (n % 10) {
		case (9):
			std::cout << "девятнадцать ";
			break;
		case (8):
			std::cout << "восемнадцать ";
			break;
		case (7):
			std::cout << "семнадцать ";
			break;
		case (6):
			std::cout << "шестнадцать ";
			break;
		case (5):
			std::cout << "пятнадцать ";
			break;
		case (4):
			std::cout << "четырнадцать ";
			break;
		case (3):
			std::cout << "тринадцать ";
			break;
		case (2):
			std::cout << "двенадцать ";
			break;
		case (1):
			std::cout << "одиннадцать ";
			break;
		case (0):
			std::cout << "десять ";
			break;
		}
		break;
	}
	if (n / 10 % 10 != 1) {
		switch (n % 10) {
		case (9):
			std::cout << "девять ";
			break;
		case (8):
			std::cout << "восемь ";
			break;
		case (7):
			std::cout << "семь ";
			break;
		case (6):
			std::cout << "шесть ";
			break;
		case (5):
			std::cout << "пять ";
			break;
		case (4):
			std::cout << "четыре ";
			break;
		case (3):
			std::cout << "три ";
			break;
		case (2):
			std::cout << "два ";
			break;
		case (1):
			std::cout << "один ";
			break;
		case (0):
			std::cout << "";
			break;
		}
	}
	if (n / 10 % 10 != 1 && n % 10 < 5 && n % 10 > 1) {
		std::cout << "банана";
	}
	else if (n / 10 % 10 != 1 && n % 10 == 1) {
		std::cout << "банан";
	}
	else {
		std::cout << "бананов";
	}
	return EXIT_SUCCESS;
}