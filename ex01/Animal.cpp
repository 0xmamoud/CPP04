#include "Animal.hpp"

Animal::Animal(): type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = copy.type;
}

Animal &Animal::operator=(const Animal &copy) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this == &copy) {
		this->type = copy.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "*Animal: this song can't be heard...*" << std::endl;
}

std::string Animal::getType(void) const {
	return this->type;
}