#pragma once
#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP
# include "ATarget.hpp"
# include <string>
# include <map>

class ASpell;
class ATarget;

typedef std::map<std::string, ATarget*> map;

class TargetGenerator {
	public:
	TargetGenerator(void);
	virtual ~TargetGenerator(void);

	void learnTargetType(ATarget* target);
	void forgetTargetType(std::string const & type);
	ATarget* createTarget(std::string const & type);
	private:
	TargetGenerator(TargetGenerator const& other);
	TargetGenerator&	operator=(TargetGenerator const& other);
	map targets;
};
#endif