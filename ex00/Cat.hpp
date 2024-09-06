#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : virtual public Animal {

	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);
		~Cat();

		void makeSound(void) const;
};

#endif