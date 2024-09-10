#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	// std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	// std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			delete this->_materias[i];
			this->_materias[i] = other._materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		delete this->_materias[i];
	}
}

void MateriaSource::learnMateria(AMateria *m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (!this->_materias[i]) {
			this->_materias[i] = m;
			std::cout << "Learned " << m->getType() << " at index " << i << std::endl;
			return;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	return NULL;
}