#include <iostream>

int main(int argc, char* argv[]) {
	int hours_1 = 0;
	int minutes_1 = 0;
	int seconds_1 = 0;
	int hours_2 = 0;
	int minutes_2 = 0;
	int seconds_2 = 0;
	std::cin >> hours_1 >> minutes_1 >> seconds_1 >> hours_2 >> minutes_2 >> seconds_2;
	hours_1 = hours_1 * 60 * 60;
	hours_2 = hours_2 * 60 * 60 - hours_1;
	minutes_1 = minutes_1 * 60;
	minutes_2 = minutes_2 * 60 - minutes_1;
	seconds_2 = seconds_2 - seconds_1;
	std::cout << hours_2 + minutes_2 + seconds_2;
	return EXIT_SUCCESS;
}