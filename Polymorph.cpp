#include "Polymorph.hpp"
#include <iostream>

Polymorph::Polymorph(void): ASpell("Polymorph", "turned into a critter")
{

}

Polymorph::Polymorph(Polymorph const& other): ASpell("Polymorph", "turned into a critter") {
	*this = other;
}

Polymorph::~Polymorph(void) {
}

Polymorph&	Polymorph::operator=(Polymorph const& other) {
	if (this != &other)
	{
	}
	return *this;
}

Polymorph*	Polymorph::clone() const
{
	return new Polymorph(*this);
}