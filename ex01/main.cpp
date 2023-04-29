
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog(); 
	const Animal* i = new Cat();

	delete j;//should not create a leak 
	delete i;

	{
		int arrSize = 10;

		Animal* animalArray[13];

		for (int i = 0; i < arrSize; i++)
		{
			if (i < arrSize / 2)
				animalArray[i] = new Dog();
			else
				animalArray[i] = new Cat();
			animalArray[i]->fillArray();
		}

		animalArray[11] = new Dog();
		animalArray[11]->fillArray();
		animalArray[12] = new Dog();
		animalArray[12]->fillArray();

		std::cout << std::endl;
		std::cout << std::endl;
		animalArray[2] = animalArray[3]; // to chatGPT: this doesn't call my DOG assignment operator overload. can i achieve this ?
		std::cout << std::endl;
		std::cout << std::endl;
		animalArray[3]->getBrain()->setIdea("BLUB", 1);
		std::cout << animalArray[2]->getBrain()->getIdeas()[1] << std::endl;

	}


	return 0;
}