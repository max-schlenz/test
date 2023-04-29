#pragma once

#ifndef __CAT__
# define __CAT__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
		private:
				Brain*	brain;
		public:
						Cat();
						~Cat();
						Cat(const Cat& other);
			virtual	Cat&	operator=(const Cat& other);
			virtual	Cat&	operator=(Cat& other);
						
				Brain*	getBrain();
				Brain*	getBrain() const;

			virtual void	makeSound() const;
			virtual void	fillArray();
};

#endif