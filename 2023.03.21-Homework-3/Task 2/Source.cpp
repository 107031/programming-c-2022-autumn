#include <iostream>
#include <string>


struct Student {

	std::string name;
	int mark1;
	int mark2;
	int mark3;

	Student() { 
		this->name = "";
		this->mark1 = 0;
		this->mark2 = 0;
		this->mark3;
	}
	Student(std::string name,
	int mark1,
	int mark2,
	int mark3) :
	name(name),
	mark1(mark1),
	mark2(mark2),
	mark3(mark3) {
	}
	Student(const Student& student) :
		name(student.name),
		mark1(student.mark1),
		mark2(student.mark1),
		mark3(student.mark1) {

	}
	~Student() {
	}

	int sumMarks() {
		return (mark1 + mark2 + mark3);
	}

	void printName() {
		std::cout << name << "\n";
	}
};

void swapStudents(Student* s1, Student* s2) {
	Student temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int main(int argc, char* argv[]) {
	int n = 0;
	std::string first_name = "";
	std::string second_name = "";
	int mark1 = 0;
	int mark2 = 0;
	int mark3 = 0;
	Student* students = new Student[10001];

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> second_name >> first_name >> mark1 >> mark2 >> mark3;
		students[i] = Student(second_name+ " " + first_name, mark1, mark2, mark3);
	}

	bool cheak = false;
	for (int i = 1; i < n; i++) {
		cheak = false;
		for (int j = 0; j < n - i; j++) {
			if (students[j].sumMarks() < students[j + 1].sumMarks()) {
				swapStudents(&students[j], &students[j + 1]);
				cheak = true;
			}
		}
		if (cheak == false) {
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		students[i].printName();
	}

	delete[] students;
	return EXIT_SUCCESS;
}