#pragma once

#ifndef __ANIMAL__
# define __ANIMAL__

# include "Brain.hpp"
# include <string>
# include <sstream>
# include <iomanip>
# include <iostream>

class Animal
{
		protected:
			std::string 	type;
		private:
			
		public:
							Animal();
							Animal(std::string type);
			virtual			~Animal();
							Animal(const Animal& other);
			Animal&			operator=(const Animal& other);
			Animal&			operator=(Animal& other);

			std::string		getType() const;

	virtual	Brain*			getBrain();
	virtual	Brain*			getBrain() const;

			virtual void	makeSound() const;

			virtual void	fillArray();
};

#endif