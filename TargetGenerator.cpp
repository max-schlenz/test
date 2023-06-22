#include "TargetGenerator.hpp"
#include <iostream>

TargetGenerator::TargetGenerator(void) {
}
TargetGenerator::~TargetGenerator(void) {
	map::iterator it = this->targets.begin();
	while (it != this->targets.end())
	{
		delete it->second;
		this->targets.erase(it->first);
		it = this->targets.begin();
	}
}

void TargetGenerator::learnTargetType(ATarget* target)
{
	map::iterator it = this->targets.find(target->getType());
	if (it == this->targets.end())
		this->targets[target->getType()] = target->clone();
}
void TargetGenerator::forgetTargetType(std::string const & type)
{
	map::iterator it = this->targets.find(type);
	if (it != this->targets.end())
	{
		this->targets.erase(type);
		delete it->second;
	}
}
ATarget* TargetGenerator::createTarget(std::string const & type)
{
	map::iterator it = this->targets.find(type);
	if (it != this->targets.end())
		return it->second;
	return NULL;
}
