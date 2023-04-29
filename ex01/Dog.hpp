#pragma once

#ifndef __DOG__
# define __DOG__

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
		private:
				Brain*	brain;
		public:
						Dog();
						~Dog();
						Dog(const Dog& other);
		virtual	Dog&	operator=(const Dog& other);
		virtual	Dog&	operator=(Dog& other);

				Brain*	getBrain();
				Brain*	getBrain() const;

		virtual void	makeSound() const;
		virtual void	fillArray();
};

#endif