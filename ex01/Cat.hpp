#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {

	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);
		~Cat();

		void makeSound(void) const;
		std::string get_idea(const int _idea) const;
};

#endif