#pragma once
#ifndef FIREBALL_HPP
# define FIREBALL_HPP
# include "ASpell.hpp"
# include <string>
class Fireball: public ASpell {
	public:
	Fireball(void);
	Fireball(Fireball const& other);

	virtual ~Fireball(void);
	Fireball&	operator=(Fireball const& other);

	virtual Fireball*	clone() const;

	private:


};
#endif