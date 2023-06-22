#include "Fwoosh.hpp"
#include <iostream>

Fwoosh::Fwoosh(void): ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::Fwoosh(Fwoosh const& other): ASpell("Fwoosh", "fwooshed") {
	*this = other;
}

Fwoosh::~Fwoosh(void) {
}

Fwoosh&	Fwoosh::operator=(Fwoosh const& other) {
	if (this != &other)
	{
	}
	return *this;
}

Fwoosh*	Fwoosh::clone() const
{
	return new Fwoosh(*this);
}