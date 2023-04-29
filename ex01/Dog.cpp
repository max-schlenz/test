
#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "DOG def constructor called" << std::endl;
	this->brain = new Brain;
}

Dog::~Dog()
{
	std::cout << "DOG destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "DOG copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "DOG assignment operator overload called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->brain->setIdea(other.getBrain()->getIdeas()[i], i);
		// for (int i = 0; i < 100; i++)
		// 	other.getBrain()->setIdea(other.getBrain()->getIdeas()[i], i);
	}
	return *this;
}

Dog& Dog::operator=(Dog& other)
{
	std::cout << "DOG assignment operator overload called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->brain->setIdea(other.getBrain()->getIdeas()[i], i);
		// for (int i = 0; i < 100; i++)
		// 	other.getBrain()->setIdea(other.getBrain()->getIdeas()[i], i);
	}
	return *this;
}

Brain *Dog::getBrain()
{
	return this->brain;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}

void Dog::makeSound() const
{
	std::cout << "DOG: *woof*" << std::endl;
}

void Dog::fillArray()
{
	for (int i = 0; i < 100; i++)
		this->getBrain()->setIdea("bark", i);
}