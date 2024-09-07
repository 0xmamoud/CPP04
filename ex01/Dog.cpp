#include "Dog.hpp"

Dog::Dog(): brain(new Brain()) {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy): brain(new Brain(*copy.brain)) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;
}

Dog &Dog::operator=(const Dog &copy) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this == &copy) {
		this->type = copy.type;
		this->brain = new Brain(*copy.brain);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound(void) const {
	std::cout << "Wouf Wouf" << std::endl;
}

std::string Dog::get_idea(const int _idea) const {
	return this->brain->get_idea(_idea);
}
