#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>
#include <iomanip>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << " meta" << std::endl;
	std::cout << j->getType() << " j" << std::endl;
	std::cout << i->getType() << " i" << std::endl;
	std::cout << "Cat sound: ";
	i->makeSound(); //will output the cat sound!
	std::cout << "Dog sound: ";
	j->makeSound();
	std::cout << "Animal sound: ";
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* j2 = new WrongCat();

	std::cout << meta2->getType() << " meta2" << std::endl;
	std::cout << j2->getType() << " j2" << std::endl;
	std::cout << "WrongCat sound: ";
	j2->makeSound();
	std::cout << "WrongAnimal sound: ";
	meta2->makeSound();

	delete meta2;
	delete j2;

	std::cout << std::endl << "----------*BRAIN TEST*------------------" << std::endl << std::endl;

	const Animal *animals[10];
	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5) {
			animals[i] = new Cat();
		} else {
			animals[i] = new Dog();
		}
	} 
	 
	std::cout << "--*BRAIN DESTRUCTIN--" << std::endl << std::endl;
	for (size_t i = 0; i < 10; i++) {
		animals[i]->makeSound();
		delete animals[i];
	}	

	std::cout << "--DEEP COPY--" << std::endl << std::endl;

	const Dog *original = new Dog();
	const Dog *copy(original);

	delete original;
	std::cout << copy->get_idea(19) << std::endl;
	delete copy;
	return 0;
}