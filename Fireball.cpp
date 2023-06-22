#include "Fireball.hpp"
#include <iostream>

Fireball::Fireball(void): ASpell("Fireball", "burnt to a crisp")
{

}

Fireball::Fireball(Fireball const& other): ASpell("Fireball", "burnt to a crisp") {
	*this = other;
}

Fireball::~Fireball(void) {
}

Fireball&	Fireball::operator=(Fireball const& other) {
	if (this != &other)
	{
	}
	return *this;
}

Fireball*	Fireball::clone() const
{
	return new Fireball(*this);
}