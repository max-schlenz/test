#pragma once
#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP
# include "ATarget.hpp"
# include <string>
class BrickWall: public ATarget {
	public:
	BrickWall(void);
	BrickWall(BrickWall const& other);
	virtual ~BrickWall(void);
	BrickWall&	operator=(BrickWall const& other);

	virtual BrickWall*	clone() const;

	private:

};
#endif