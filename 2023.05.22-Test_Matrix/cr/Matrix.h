#pragma once

#include <iostream>
#include <ostream>

class Matrix {
private:

	int n;
	int m;
	float** arr;

	void clear_and_delete();

public:

	Matrix(int n = 1, int m = 1);
	Matrix(const Matrix& matrix);
	~Matrix();

	void insert_value();

	Matrix operator+(const Matrix& matrix);
	Matrix operator*(const Matrix& matrix);
	Matrix& operator=(const Matrix& matrix);

	Matrix operator*(const float& s);
	friend Matrix operator*(const float& s, const Matrix& matrix);

	friend std::ostream& operator<<(std::ostream& stream,const Matrix& matrix);
};




