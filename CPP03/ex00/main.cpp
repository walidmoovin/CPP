#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap test("walid");
    std::cout << "Name : " << test.getName() << std::endl;
    std::cout << "Energy points : " << test.getEnergyPoints() << std::endl;
    test.attack("mea");
    std::cout << "Energy points : " << test.getEnergyPoints() << std::endl;
    std::cout << "Hit points : " << test.getHitPoints() << std::endl;
    test.beRepaired(10);
    std::cout << "Energy points : " << test.getEnergyPoints() << std::endl;
    std::cout << "Hit points : " << test.getHitPoints() << std::endl;
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    test.attack("mea");
    return 0;
}