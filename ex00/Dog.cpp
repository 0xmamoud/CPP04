#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;
}

Dog &Dog::operator=(const Dog &copy) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this == &copy) {
		this->type = copy.type;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "Wouf Wouf" << std::endl;
}
