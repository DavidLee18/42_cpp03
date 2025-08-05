#include "ScavTrap.h"

int main() {
	ScavTrap a("a");
	ScavTrap b("b");

	for (size_t i = 0; i < 50; i++)
		a.attack("b");
	a.attack("b");
	a.beRepaired(10);
	b.takeDamage(99);
	b.beRepaired(99);
	b.takeDamage(100);
	b.takeDamage(1);

	return 0;
}
