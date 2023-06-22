#include "Warlock.hpp"
#include "ATarget.hpp"
#include <iostream>

Warlock::Warlock(void){

}

Warlock::Warlock(std::string const& name, std::string const& title): name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const& other) {
	*this = other;
}

Warlock::~Warlock(void) {
	std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock&	Warlock::operator=(Warlock const& other) {
	if (this != &other)
	{
		this->name = other.getName();
		this->title = other.title;
	}
	return *this;
}

std::string const& Warlock::getName(void) const
{
	return this->name;
}

std::string const& Warlock::getTitle(void) const
{
	return this->title;
}
void	Warlock::setTitle(std::string const& title)
{
	this->title = title;
}

void	Warlock::introduce() const{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* lern)
{
	this->spellbook.learnSpell(lern);
}
void	Warlock::forgetSpell(std::string name)
{
	this->spellbook.forgetSpell(name);
}

void	Warlock::launchSpell(std::string name, ATarget const& target)
{
	this->spellbook.createSpell(name)->launch(target);
}
