#include <iostream>

int main(int argc, char* argv[]) {
    int a1 = 0;
    int b1 = 0;
    int a2 = 0;
    int b2 = 0;
    std::cin >> a1 >> b1 >> a2 >> b2;
    if (((a1 + b1 == a2 + b2) || (a1 - b1 == a2 - b2)) || ((a1 == a2) || (b1 == b2))) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    return EXIT_SUCCESS;
}