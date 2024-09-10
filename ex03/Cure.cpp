#include "Cure.hpp"

Cure::Cure() {
	// std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &copy) {
	// std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(const Cure &other) {
	// std::cout << "Cure assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const {
	std::cout << "Cure clone called" << std::endl;
	return new Cure(*this);
}
