#include <iostream> 

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	switch (n / 100 % 10) {
	case (9):
		std::cout << "��������� ";
		break;
	case (8):
		std::cout << "��������� ";
		break;
	case (7):
		std::cout << "������� ";
		break;
	case (6):
		std::cout << "�������� ";
		break;
	case (5):
		std::cout << "������� ";
		break;
	case (4):
		std::cout << "��������� ";
		break;
	case (3):
		std::cout << "������ ";
		break;
	case (2):
		std::cout << "������ ";
		break;
	case (1):
		std::cout << "��� ";
		break;
	case (0):
		std::cout << "";
		break;
	}
	switch (n / 10 % 10) {
	case (9):
		std::cout << "��������� ";
		break;
	case (8):
		std::cout << "����������� ";
		break;
	case (7):
		std::cout << "��������� ";
		break;
	case (6):
		std::cout << "���������� ";
		break;
	case (5):
		std::cout << "��������� ";
		break;
	case (4):
		std::cout << "����� ";
		break;
	case (3):
		std::cout << "�������� ";
		break;
	case (2):
		std::cout << "�������� ";
		break;
	case (1):
		switch (n % 10) {
		case (9):
			std::cout << "������������ ";
			break;
		case (8):
			std::cout << "������������ ";
			break;
		case (7):
			std::cout << "���������� ";
			break;
		case (6):
			std::cout << "����������� ";
			break;
		case (5):
			std::cout << "���������� ";
			break;
		case (4):
			std::cout << "������������ ";
			break;
		case (3):
			std::cout << "���������� ";
			break;
		case (2):
			std::cout << "���������� ";
			break;
		case (1):
			std::cout << "����������� ";
			break;
		case (0):
			std::cout << "������ ";
			break;
		}
		break;
	}
	if (n / 10 % 10 != 1) {
		switch (n % 10) {
		case (9):
			std::cout << "������ ";
			break;
		case (8):
			std::cout << "������ ";
			break;
		case (7):
			std::cout << "���� ";
			break;
		case (6):
			std::cout << "����� ";
			break;
		case (5):
			std::cout << "���� ";
			break;
		case (4):
			std::cout << "������ ";
			break;
		case (3):
			std::cout << "��� ";
			break;
		case (2):
			std::cout << "��� ";
			break;
		case (1):
			std::cout << "���� ";
			break;
		case (0):
			std::cout << "";
			break;
		}
	}
	if (n / 10 % 10 != 1 && n % 10 < 5 && n % 10 > 1) {
		std::cout << "������";
	}
	else if (n / 10 % 10 != 1 && n % 10 == 1) {
		std::cout << "�����";
	}
	else {
		std::cout << "�������";
	}
	return EXIT_SUCCESS;
}