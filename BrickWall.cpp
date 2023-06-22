#include "BrickWall.hpp"
#include <iostream>

BrickWall::BrickWall(void): ATarget("Inconspicuous Red-brick Wall")
{

}

BrickWall::BrickWall(BrickWall const& other): ATarget("Inconspicuous Red-brick Wall") {
	*this = other;
}

BrickWall::~BrickWall(void) {
}

BrickWall&	BrickWall::operator=(BrickWall const& other) {
	if (this != &other)
	{
	}
	return *this;
}

BrickWall*	BrickWall::clone() const
{
	return new BrickWall(*this);
}
