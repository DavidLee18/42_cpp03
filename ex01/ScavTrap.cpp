#include "ScavTrap.h"

ScavTrap ::ScavTrap(std ::string name)
    : ClapTrap(name) {
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
  std ::cout << "ScavTrap" << "(" << "std::string name" << ")" << std ::endl;
}
ScavTrap ::ScavTrap(const ScavTrap &other)
    : ClapTrap(other) {
  std ::cout << "ScavTrap" << "(const " << "ScavTrap" << "&)" << std ::endl;
}
ScavTrap &ScavTrap ::operator=(const ScavTrap &other) {
  this->name = other.name;
  this->hit_points = other.hit_points;
  this->energy_points = other.energy_points;
  this->attack_damage = other.attack_damage;
  std ::cout << "ScavTrap" << "::operator=(const " << "ScavTrap" << "&)"
             << std ::endl;
  return *this;
}
ScavTrap ::~ScavTrap() {
  std ::cout << "~" << "ScavTrap" << "()" << std ::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << "! on your feet!" << std::endl;
}
