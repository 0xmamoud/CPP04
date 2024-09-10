#include "Ice.hpp"

Ice::Ice() {
	// std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &copy) {
	// std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice &Ice::operator=(const Ice &other) {
	// std::cout << "Ice assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const {
	// std::cout << "Ice clone called" << std::endl;
	return new Ice(*this);
}
