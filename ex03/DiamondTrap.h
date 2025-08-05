#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.h"
#include "ScavTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string name;
	public:
		DEF_OCF_(DiamondTrap, std::string)
		void whoami();
		using ScavTrap::attack;
};

#endif
