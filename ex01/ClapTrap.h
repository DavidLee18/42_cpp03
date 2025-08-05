#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include "macros.def"
#include <iostream>
#include <string>

class ClapTrap {
	protected:
		std::string name;
		size_t hit_points;
		size_t energy_points;
		size_t attack_damage;
	public:
		DEF_OCF_(ClapTrap, std::string)
		void attack(const std::string&);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
};

#endif
