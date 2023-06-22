#pragma once
#ifndef ATARGET_HPP
# define ATARGET_HPP
# include "ASpell.hpp"
# include <string>

class ASpell;

class ATarget {
	public:
	ATarget(std::string const& type);
	virtual ~ATarget(void);
	ATarget&	operator=(ATarget const& other);

	std::string const&	getType(void) const;

	virtual ATarget*	clone() const = 0;
	void	getHitBySpell(ASpell const& spell) const;

	private:
	ATarget(void);
	ATarget(ATarget const& other);
	std::string type;

};
#endif