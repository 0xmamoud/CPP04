#ifndef Dog_H
#define Dog_H

#include "Animal.hpp"

class Dog : virtual public Animal {
private:
	std::string type;

public:
	Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &copy);
	~Dog();

	void makeSound(void) const;
};

#endif