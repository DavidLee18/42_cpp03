#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include "macros.def"
#include <string>

class ClapTrap {
	private:
		std::string name;
		size_t hit_points;
		size_t energy_points;
		size_t attack_damage;
};

#endif
