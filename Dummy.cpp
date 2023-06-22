#include "Dummy.hpp"
#include <iostream>

Dummy::Dummy(void): ATarget("Target Practice Dummy")
{

}

Dummy::Dummy(Dummy const& other): ATarget("Target Practice Dummy") {
	*this = other;
}

Dummy::~Dummy(void) {
}

Dummy&	Dummy::operator=(Dummy const& other) {
	if (this != &other)
	{
	}
	return *this;
}

Dummy*	Dummy::clone() const
{
	return new Dummy(*this);
}
