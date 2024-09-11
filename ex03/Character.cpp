#include "Character.hpp"


Character::Character(std::string name) : name(name) {
	// std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 8; i++)
		this->ground[i] = NULL;
}

Character::Character(const Character &copy) {
	// std::cout << "Character copy constructor called" << std::endl;
	*this = copy;
}

Character &Character::operator=(const Character &other) {
	// std::cout << "Character assignation operator called" << std::endl;
	if (this != &other) {
		this->name = other.name;
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = other.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
	}
	for (int i = 0; i < 8; i++) {
		if (this->ground[i])
			delete this->ground[i];
	}
}

std::string const &Character::getName() const {
	return this->name;
}


void Character::equip(AMateria *m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] == m) {
			std::cout << "Already equipped" << std::endl;
			return;
		}
		if (!this->inventory[i]) {
			this->inventory[i] = m;
			std::cout << "Equipped " << m->getType() << " at index " << i << std::endl;
			return;
		}
	}
	std::cout << "Inventory is full" << std::endl;
	delete m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || !this->inventory[idx]) {
		std::cout << "Invalid index" << std::endl;
		return;
	}
	if (this->ground[7]) {
		std::cout << "Ground is full" << std::endl;
		return;
	}	
	else {
		for (int i = 0; i < 8; i++) {
			if (!this->ground[i]) {
				this->ground[i] = this->inventory[idx];
				break;
			}
		}
	}
	std::cout << "Unequipped " << this->inventory[idx]->getType() << " at index " << idx << std::endl;
	this->inventory[idx] = NULL;
}


void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= 4 || !this->inventory[idx]) {
		std::cout << "Invalid index" << std::endl;
		return;
	}
	this->inventory[idx]->use(target);
}
