#pragma once
#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
# include <string>
# include <map>
# include "ASpell.hpp"

typedef std::map<std::string, ASpell*> map2;

class SpellBook {
	public:
	SpellBook(void);
	virtual ~SpellBook(void);

	void	learnSpell(ASpell* lern);
	void	forgetSpell(std::string const& name);
	ASpell*	createSpell(std::string const & name);

	private:
	SpellBook(SpellBook const& other);
	SpellBook&	operator=(SpellBook const& other);
	map2 spellbook;
};
#endif