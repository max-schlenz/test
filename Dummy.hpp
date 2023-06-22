#pragma once
#ifndef DUMMY_HPP
# define DUMMY_HPP
# include "ATarget.hpp"
# include <string>
class Dummy: public ATarget {
	public:
	Dummy(void);
	Dummy(Dummy const& other);
	virtual ~Dummy(void);
	Dummy&	operator=(Dummy const& other);

	virtual Dummy*	clone() const;

	private:

};
#endif