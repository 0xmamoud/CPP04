#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : virtual public Animal {
private:
	std::string type;

public:
	Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &copy);
	~Cat();

	void makeSound(void) const;
};

#endif