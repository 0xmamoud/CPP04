#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &copy);
	Animal &operator=(const Animal &copy);
	~Animal();

	virtual void makeSound(void) const;
	std::string getType(void) const;
};
#endif