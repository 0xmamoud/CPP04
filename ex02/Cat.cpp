#include "Cat.hpp"

Cat::Cat(): brain(new Brain) {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy): brain(new Brain(*copy.brain)) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
}

Cat &Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this == &copy) {
		this->type = copy.type;
		this->brain = new Brain(*copy.brain);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound(void) const {
	std::cout << "Meow Meow" << std::endl;
}

std::string Cat::get_idea(const int _idea) const {
	return this->brain->get_idea(_idea);
}
