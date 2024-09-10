#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: virtual public AMateria {
public:
	Cure();
	Cure(const Cure &copy);
	Cure &operator=(const Cure &other);
	~Cure();

	AMateria *clone() const;
};

#endif
