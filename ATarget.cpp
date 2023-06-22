#include "ATarget.hpp"
#include <iostream>

ATarget::ATarget(void){

}

ATarget::ATarget(std::string const& type): type(type)
{
}

ATarget::ATarget(ATarget const& other) {
	*this = other;
}

ATarget::~ATarget(void) {
}

ATarget&	ATarget::operator=(ATarget const& other) {
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

std::string const& ATarget::getType(void) const
{
	return this->type;
}

void	ATarget::getHitBySpell(ASpell const& spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
