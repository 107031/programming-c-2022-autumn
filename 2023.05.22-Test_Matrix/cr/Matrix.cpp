#include "Matrix.h"


//Private function:
void Matrix::clear_and_delete() {
	if (this->arr != nullptr) {
		for (int i = 0; i < this->n; i++) {
			if (this->arr[i] != nullptr) {
				for (int j = 0; j < this->m; j++) {
					this->arr[i][j] = 0;
				}
				delete this->arr[i];
			}
		}
		delete[] this->arr;
	}
}


//Public functions:
void Matrix::insert_value() {
	std::cout << "vvedite matricu " << this->n << " na " << this->m << std::endl;
	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->m; j++) {
			std::cin >> this->arr[i][j];
		}
	}
}


//Constructors and destructor:
Matrix::Matrix(int n, int m) : n(n), m(m) {
	clear_and_delete();
	this->arr = new float* [this->n];
	for (int i = 0; i < this->n; i++) {
		this->arr[i] = new float[this->m];
	}
	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->m; j++) {
			this->arr[i][j] = 0;
		}
	}

}


Matrix::Matrix(const Matrix& matrix) {
	clear_and_delete();
	this->n = matrix.n;
	this->m = matrix.m;
	this->arr = new float* [matrix.n];
	for (int i = 0; i < matrix.n; i++) {
		this->arr[i] = new float[matrix.m];
	}
	for (int i = 0; i < matrix.n; i++) {
		for (int j = 0; j < matrix.m; j++) {
			this->arr[i][j] = matrix.arr[i][j];
		}
	}
}


Matrix::~Matrix() {
	clear_and_delete();
}


//Operators:
Matrix Matrix::operator+(const Matrix& matrix) {
	Matrix temp(this->n, this->m);
	if (this->n == matrix.n && this->m == matrix.m) {
		for (int i = 0; i < this->n; i++) {
			for (int j = 0; j < this->m; j++) {
				temp.arr[i][j] = this->arr[i][j] + matrix.arr[i][j];
			}
		};
	}
	else {
		std::cout << "error + " << std::endl;
	}
	return temp;
}


Matrix Matrix::operator*(const Matrix& matrix) {
	Matrix temp(this->n, matrix.m);
	float sum = 0;
	if (this->m == matrix.n) {
		for (int i = 0; i < this->n; i++) {
			for (int j = 0; j < matrix.m; j++) {
				for (int k = 0; k < this->m; k++) {
					sum += this->arr[i][k] * matrix.arr[k][j];
				}
				temp.arr[i][j] = sum;
				sum = 0;
			}
		}
	}
	else {
		std::cout << "error * " << std::endl;
	}
	return temp;
}


Matrix& Matrix::operator=(const Matrix& matrix) {
	clear_and_delete();
	this->n = matrix.n;
	this->m = matrix.m;
	this->arr = new float* [matrix.n];
	for (int i = 0; i < matrix.n; i++) {
		this->arr[i] = new float[matrix.m];
	}
	for (int i = 0; i < matrix.n; i++) {
		for (int j = 0; j < matrix.m; j++) {
			this->arr[i][j] = matrix.arr[i][j];
		}
	}
	return *this;
}


Matrix Matrix::operator*(const float& s) {
	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->m; j++) {
			this->arr[i][j] = this->arr[i][j] * s;
		}
	}
	return *this;
}


Matrix operator*(const float& s, const Matrix& matrix) {
	Matrix temp = matrix;
	for (int i = 0; i < temp.n; i++) {
		for (int j = 0; j < temp.m; j++) {
			temp.arr[i][j] = temp.arr[i][j] * s;
		}
	}
	return temp;
}

std::ostream& operator<<(std::ostream& stream,const Matrix& matrix) {
	for (int i = 0; i < matrix.n; i++) {
		for (int j = 0; j < matrix.m; j++) {
			stream << matrix.arr[i][j] << " ";
		}
		stream << std::endl;
	}
	return stream;
}



