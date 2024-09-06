#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
}

Cat &Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this == &copy) {
		this->type = copy.type;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "Meow Meow" << std::endl;
}
