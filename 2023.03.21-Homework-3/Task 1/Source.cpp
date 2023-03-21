#include <iostream>


struct Point {

	int x;
	int y;

	Point() { this->x = 0; this->y = 0; }
	Point (int x, int y) : x(x), y(y) {}
	Point (const Point& point) : x(point.x), y(point.y) {}
	~Point() {}

	int lengthSquare() {
		return (x * x + y * y);
	}

	void printCoordinates() {
		std::cout << x << " " << y << "\n";
	}
};

int main(int argc, char* argv[]) {
	int n = 0;
	int x = 0;
	int y = 0;
	Point* points = new Point[100];

	std::cin >> n;


	for (int i = 0; i < n; i++) {
		std::cin >> x >> y;
		points[i] = Point(x, y);
	}

	bool cheak = false;
	for (int i = 1; i < n; i++) {
		cheak = false;
		for (int j = 0; j < n - i; j++) {
			if (points[j].lengthSquare() > points[j + 1].lengthSquare()) {
				std::swap(points[j].x, points[j + 1].x);
				std::swap(points[j].y, points[j + 1].y);
				cheak = true;
			}
		}
		if (cheak == false) {
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		points[i].printCoordinates();
	}
	
	delete[] points;
	return EXIT_SUCCESS;
}