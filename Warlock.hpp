#pragma once
#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"
# include <string>

class Warlock {
	public:
	Warlock(std::string const& name, std::string const& title);
	~Warlock(void);
	Warlock&	operator=(Warlock const& other);

	std::string const&	getName(void) const;
	std::string const&	getTitle(void) const;

	void	setTitle(std::string const& title);
	void	introduce() const;

	void	learnSpell(ASpell* lern);
	void	forgetSpell(std::string name);
	void	launchSpell(std::string name, ATarget const& target);

	private:
	Warlock(void);
	Warlock(Warlock const& other);
	std::string name;
	std::string title;
	SpellBook	spellbook;

};
#endif