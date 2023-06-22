#include "ASpell.hpp"
#include <iostream>

ASpell::ASpell(void){

}

ASpell::ASpell(std::string const& name, std::string const& effects): name(name), effects(effects)
{
}

ASpell::ASpell(ASpell const& other) {
	*this = other;
}

ASpell::~ASpell(void) {
}

ASpell&	ASpell::operator=(ASpell const& other) {
	if (this != &other)
	{
		this->name = other.name;
		this->effects = other.effects;
	}
	return *this;
}

std::string const& ASpell::getName(void) const
{
	return this->name;
}

std::string const& ASpell::getEffects(void) const
{
	return this->effects;
}

void ASpell::launch(ATarget const& target)
{
	target.getHitBySpell(*this);
}
