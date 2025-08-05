#include "FragTrap.h"

int main() {
	FragTrap a("a");
	FragTrap b("b");

	for (size_t i = 0; i < 100; i++)
		a.attack("b");
	a.attack("b");
	a.beRepaired(10);
	b.takeDamage(99);
	b.beRepaired(99);
	b.takeDamage(100);
	b.takeDamage(1);

	return 0;
}
