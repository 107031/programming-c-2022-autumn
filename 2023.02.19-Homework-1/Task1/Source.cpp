#include <iostream>
#include <string>

struct Animal {
	std::string name;
	std::string type;
	int age;
	
	Animal() {
		this->name = "Behemoth";
		this->type = "cat";
		this->age = 1;
	}

	Animal(
		std::string name,
		std::string type,
		int age)
		: name(name), type(type), age(age)
		{

	}
	
	Animal(const Animal& temp) : name(temp.name), type(temp.type), age(temp.age) {}

	
	~Animal() {}
};

void printAnimal(Animal temp) {
	std::cout << "animal name = " << temp.name << ", animal type = " << temp.type << ", animal age = " << temp.age << "\n";
}

void elderAnimal(Animal temp) {
	temp.age++;
}

int main(int argc, char* argv[]) {
	Animal cat;
	printAnimal(cat);
	Animal cat2;
	cat2.name = "Garfield";
	elderAnimal(cat2);
	Animal cat3 = cat2;
	printAnimal(cat3);
	return EXIT_SUCCESS;
}