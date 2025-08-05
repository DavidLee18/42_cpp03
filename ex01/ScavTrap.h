#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap: public ClapTrap {
	public:
		DEF_OCF_(ScavTrap, std::string)
		void guardGate();
};

#endif
