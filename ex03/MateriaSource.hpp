#ifndef MATERIALSOURCE_HPP
#define MATERIALSOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class AMateria;
class Ice;
class Cure;

class MateriaSource: virtual public IMateriaSource {
private:
	AMateria* _materias[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource &operator=(const MateriaSource &other);
	~MateriaSource();

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);
};

#endif