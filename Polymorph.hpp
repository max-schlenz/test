#pragma once
#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP
# include "ASpell.hpp"
# include <string>
class Polymorph: public ASpell {
	public:
	Polymorph(void);
	Polymorph(Polymorph const& other);

	virtual ~Polymorph(void);
	Polymorph&	operator=(Polymorph const& other);

	virtual Polymorph*	clone() const;

	private:


};
#endif