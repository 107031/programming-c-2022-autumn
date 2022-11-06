#include <iostream> 

int main(int argc, char* argv[]) {
	int n;
	int a[100]{ 0 };
	int b[100000]{ 0 };
	int max1 = 0;
	int max2 = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			max1 = a[j] * i;
		}
	}
}