
#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "CAT def constructor called" << std::endl;
	this->brain = new Brain;
}

Cat::~Cat()
{
	std::cout << "CAT destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << "CAT copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "CAT assignment operator overload called" << std::endl;
	if (this != &other)
		*this = other;
	return *this;
}

Cat& Cat::operator=(Cat& other)
{
	std::cout << "CAT assignment operator overload called" << std::endl;
	if (this != &other)
		*this = other;
	return *this;
}

Brain *Cat::getBrain()
{
	return this->brain;
}

Brain *Cat::getBrain() const
{
	return this->brain;
}

void Cat::makeSound() const
{
	std::cout << "CAT: *meow*" << std::endl;
}

void Cat::fillArray()
{
	for (int i = 0; i < 100; i++)
		this->getBrain()->setIdea("eat", i);
}
