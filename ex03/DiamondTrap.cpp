#include "DiamondTrap.h"

DiamondTrap ::DiamondTrap(std ::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), name(name) {
    this->energy_points = 50;
  std ::cout << "DiamondTrap" << "(" << "std::string name" << ")" << std ::endl;
}
DiamondTrap ::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name) {
  std ::cout << "DiamondTrap" << "(const " << "DiamondTrap" << "&)"
             << std ::endl;
}
DiamondTrap &DiamondTrap ::operator=(const DiamondTrap &other) {
  this->name = other.name;
  this->hit_points = other.hit_points;
  this->energy_points = other.energy_points;
  this->attack_damage = other.attack_damage;
  std ::cout << "DiamondTrap" << "::operator=(const " << "DiamondTrap" << "&)"
             << std ::endl;
  return *this;
}
DiamondTrap ::~DiamondTrap() {
  std ::cout << "~" << "DiamondTrap" << "()" << std ::endl;
}
void DiamondTrap::whoami() {
	std::cout << "I'm DiamondTrap " << name << ", Also known as ClapTrap " << ClapTrap::name << std::endl;
}
