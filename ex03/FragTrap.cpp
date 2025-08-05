#include "FragTrap.h"

FragTrap ::FragTrap(std ::string name)
    : ClapTrap(name) {
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
  std ::cout << "FragTrap" << "(" << "std::string name" << ")" << std ::endl;
}
FragTrap ::FragTrap(const FragTrap &other)
    : ClapTrap(other) {
  std ::cout << "FragTrap" << "(const " << "FragTrap" << "&)" << std ::endl;
}
FragTrap &FragTrap ::operator=(const FragTrap &other) {
  this->name = other.name;
  this->hit_points = other.hit_points;
  this->energy_points = other.energy_points;
  this->attack_damage = other.attack_damage;
  std ::cout << "FragTrap" << "::operator=(const " << "FragTrap" << "&)"
             << std ::endl;
  return *this;
}
FragTrap ::~FragTrap() {
  std ::cout << "~" << "FragTrap" << "()" << std ::endl;
}
void FragTrap::highFivesGuys() {
	std::cout << "Hey Guys! Let's make High Fives with FragTrap " << name << "!" << std::endl;
}
