#include <iostream>

int main(int argc, char* argv[]) {
    int x = 0;
    int y = 0;
    std::cin >> x >> y;
    int mod = ((x - y) % 2 + (x - y + 1) % 2) % 2 * (x - y);
    std::cout << (x + y + mod) / 2;
    return EXIT_SUCCESS;
}