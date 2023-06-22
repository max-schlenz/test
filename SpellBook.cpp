#include "SpellBook.hpp"
#include <iostream>

SpellBook::SpellBook(void)
{

}

SpellBook::~SpellBook(void)
{
	map2::iterator it = this->spellbook.begin();
	while (it != this->spellbook.end())
	{
		delete it->second;
		this->spellbook.erase(it->first);
		it = this->spellbook.begin();
	}
}

void	SpellBook::learnSpell(ASpell* lern)
{
	map2::iterator it = this->spellbook.find(lern->getName());
	if (it == this->spellbook.end())
		this->spellbook[lern->getName()] = lern->clone();
}

void	SpellBook::forgetSpell(std::string const& name)
{
	map2::iterator it = this->spellbook.find(name);
	if (it != this->spellbook.end())
		this->spellbook.erase(name);
	delete it->second;
}

ASpell*	SpellBook::createSpell(std::string const& name)
{
	map2::iterator it = this->spellbook.find(name);
	if (it != this->spellbook.end())
		return it->second;
	return NULL;
}