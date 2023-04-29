
#pragma once

#ifndef __BRAIN__
# define __BRAIN__

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string		ideas[100];
	public:
						Brain();
						~Brain();

		std::string*	getIdeas();
		void setIdea(std::string idea, int i);
};

#endif