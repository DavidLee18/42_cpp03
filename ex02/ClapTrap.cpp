#include "ClapTrap.h"

IMPL_OCF(ClapTrap,
	other,
	1, std::string name,
	name, name, hit_points, 10, energy_points, 10, attack_damage, 0)

void ClapTrap::attack(const std::string& target) {
	if (hit_points == 0)
		std::cout << "ClapTrap(" << name << ") can't attack (hp 0)" << std::endl;
	else if (energy_points == 0)
		std::cout << "ClapTrap(" << name << ") can't attack (ep 0)" << std::endl;
	else {
		std::cout << "attack: ClapTrap(" << name << ") -> " << target
		<< "(hp -" << attack_damage << ")" << std::endl;
		energy_points--;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hit_points == 0)
		std::cout << "ClapTrap(" << name << ") can't be repaired (hp 0)" << std::endl;
	else if (energy_points == 0)
		std::cout << "ClapTrap(" << name << ") can't be repaired (ep 0)" << std::endl;
	else {
		std::cout << "repair: ClapTrap(" << name << ") (hp +" << amount << ")" << std::endl;
		hit_points += amount;
		energy_points--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hit_points == 0)
		std::cout << "ClapTrap(" << name << ") can't take damage (hp 0)" << std::endl;
	else {
		std::cout << "attacked: ClapTrap(" << name << ") (hp -" << amount << ")" << std::endl;
		if (amount > hit_points)
			hit_points = 0;
		else
			hit_points -= amount;
	}
}
