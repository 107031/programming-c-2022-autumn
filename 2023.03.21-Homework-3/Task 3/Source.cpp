#include <iostream>

struct Shape {
	float s = 0;

	Shape(float s) : s(s) {}
	Shape(const Shape& shape) : s(shape.s) {}
	~Shape() {}

	float S() {
		return s;
	}
};

struct Rectangle : Shape {
	Rectangle(int a = 0, float b = 0) : Shape(a * b) {}
};

struct Triangle : Rectangle {
	Triangle(int a = 0, int h = 0) : Rectangle(a, h / 2) {}
};

struct Circle : Rectangle {
	Circle(int r = 0) : Rectangle(r * r, 3.1415) {}
};

struct Square : Rectangle {
	Square(int a = 0) : Rectangle(a, a) {}
};

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	std::cout << "Rectangle = " << Rectangle(a, b).S() << "\n"
		<< "Triangle = " << Triangle(a, b).S() << "\n"
		<< "Circle = " << Circle(a).S() << "\n"
		<< "Square = " << Square(a).S();
	return EXIT_SUCCESS;
}