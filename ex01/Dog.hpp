#ifndef Dog_H
#define Dog_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {

	private:
		Brain *brain;

	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		~Dog();
	
		void makeSound(void) const;
		std::string get_idea(const int _idea) const;
};

#endif