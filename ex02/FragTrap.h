#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap: public ClapTrap {
	public:
		DEF_OCF_(FragTrap, std::string)
		void highFivesGuys();
};

#endif
