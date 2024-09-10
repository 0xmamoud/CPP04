#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character: virtual public ICharacter
{
private:
	std::string name;
	AMateria *inventory[4];
	AMateria *ground[100];

public:
	Character(std::string name);
	Character(const Character &copy);
	Character &operator=(const Character &other);
	~Character();

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif