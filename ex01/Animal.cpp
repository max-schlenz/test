
#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "ANIMAL def constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "ANIMAL type constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "ANIMAL destructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "ANIMAL copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "ANIMAL const assignment operator overload called" << std::endl;
	if (this != &other)
		*this = other;
	return *this;
}

Animal& Animal::operator=(Animal& other)
{
	std::cout << "ANIMAL assignment operator overload called" << std::endl;
	if (this != &other)
		*this = other;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

Brain *Animal::getBrain()
{
	std::cout << "virtual get brain called" << std::endl;
	return NULL;
}

Brain *Animal::getBrain() const
{
	std::cout << "virtual get brain called const" << std::endl;
	return NULL;
}

void Animal::makeSound() const
{
	std::cout << "*default animal sounds*" << std::endl;
}

void Animal::fillArray()
{
	std::cout << "virtual fill array called" << std::endl;
}

// std::string *Animal::getIdeas() const
// {
// 	return NULL;
// }