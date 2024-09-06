#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this == &copy) {
		this->type = copy.type;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << "WrongCat: grrr grrrr" << std::endl;
}

