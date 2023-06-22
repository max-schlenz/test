#pragma once
#ifndef FWOOSH_HPP
# define FWOOSH_HPP
# include "ASpell.hpp"
# include <string>
class Fwoosh: public ASpell {
	public:
	Fwoosh(void);
	Fwoosh(Fwoosh const& other);
	virtual ~Fwoosh(void);
	Fwoosh&	operator=(Fwoosh const& other);

	virtual Fwoosh*	clone() const;

	private:

};
#endif