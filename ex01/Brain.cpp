#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "BRAIN constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "BRAIN destructor called" << std::endl;
}

std::string* Brain::getIdeas()
{
	return this->ideas;
}

void Brain::setIdea(std::string idea, int i)
{
	this->ideas[i] = idea;
}
