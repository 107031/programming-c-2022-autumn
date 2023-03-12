#include <iostream>
#include <string>

enum AnimalType {
	None = 0,
	Mouse = 1,
	Cat = 2,
	Dog = 3
};

std::string typeIntToString(AnimalType type) {
	switch (type) {
	case None:
		return "None";
	case Cat:
		return "Cat";
	case Dog:
		return "Dog";
	case Mouse:
		return "Mouse";
	}
}

class Animal {
private:
	int age;
	int power;
	AnimalType type;
	std::string name;
public:
	Animal() {
		this->age = 0;
		this->power = 0;
		this->type = None;
		this->name = "";
	}
	Animal(
		int age,
		int power,
		AnimalType type,
		std::string name) :
		age(age),
		power(power),
		type(type),
		name(name) {
	}
	Animal(const Animal& animal) : 
		age(animal.age), 
		power(animal.power), 
		type(animal.type), 
		name(animal.name) {
	}
	~Animal() {
	}

	std::string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	int getPower() {
		return power;
	}
	AnimalType getType() {
		return type;
	}

	void setName(std::string name) {
		if (name != "") {
			this->name = name;
		}
	}
	void setAge(int age) {
		if (age > 0) {
			this->age = age;
		}
	}
	void setPower(int power) {
		if (power > 0) {
			this->power = power;
		}
	}
	void setType(AnimalType type) {
		if (type != None) {
			this->type = type;
		}
	}

	void printInfo() {
		std::cout << "\n" << this->getName() << " info:" << "\n"
			<< "age = " << this->getAge() << "\n"
			<< "power = " << this->getPower() << "\n"
			<< "type = " << typeIntToString(this->getType()) << "\n";
	}
	
	void Mighter() {
		this->setPower(this->getPower() + 1);
	}
};

void duel(Animal* predator, Animal* prey) {
	if (predator->getType() * predator->getPower() >= prey->getType() * prey->getPower()) {
		predator->Mighter();
	}
	else {
		*predator = *prey;
		predator->Mighter();
	}
}

std::string nameForAnimal(int i) {
	std::string names[9] = { "Cooper",	"Milo",	"Finn", "Charlie", "Tucker", "Ollie", "Bear", "Max", "Loki" };
	return (names[std::rand() % 9] + "_" + std::to_string(i));
}

int main(int argc, char* argv[]) {
	Animal* animals[100];
	for (int i = 0; i < 100; i++) {
		animals[i] = new Animal(std::rand() % 100 + 1, std::rand() % 1000 + 1, (AnimalType)(rand() % 3 + 1), nameForAnimal(i + 1));
		animals[i]->printInfo();
	}
	for (int i = 1; i < 99; i++) {
		duel(animals[i + 1], animals[i]);
	}
	std::cout  << "\n" << "======================" << "\n" << "Winner:";
	animals[99]->printInfo();
	for (int i = 0; i < 100; i++) {
		delete animals[i];
	}

	return EXIT_SUCCESS;
}