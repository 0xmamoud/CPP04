#ifndef WrongCat_H
#define WrongCat_H

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {

	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		WrongCat &operator=(const WrongCat &copy);
		~WrongCat();
	
		void makeSound(void) const;
};

#endif