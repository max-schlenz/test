#pragma once
#ifndef ASPELL_HPP
# define ASPELL_HPP
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell {
	public:
	ASpell(void);
	ASpell(std::string const& name, std::string const& effects);
	virtual ~ASpell(void);
	ASpell&	operator=(ASpell const& other);

	std::string const&	getName(void) const;
	std::string const&	getEffects(void) const;

	virtual ASpell*	clone() const = 0;
	void launch(ATarget const& target);

	private:
	ASpell(ASpell const& other);
	std::string name;
	std::string effects;

};
#endif