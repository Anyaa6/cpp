#include "Zombie.hpp"

int main()
{
    Zombie  *horde;

    horde = zombieHorde(12, "Frank");

    delete [] horde;
}