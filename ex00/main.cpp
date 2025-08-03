#include "ClapTrap.h"

int main() {
	ClapTrap a("a");
	ClapTrap b("b");

	for (size_t i = 0; i < 10; i++)
		a.attack("b");
	a.attack("b");
	a.beRepaired(10);
	b.takeDamage(9);
	b.beRepaired(9);
	b.takeDamage(10);
	b.takeDamage(1);

	return 0;
}
