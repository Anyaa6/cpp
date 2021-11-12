
int main()
{
    // Make it so the following code produces attacks with "crude spiked club" THEN "some
    // other type of club", in both test cases:
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}

// Make a Weapon class, that has a type string, and a getType method that returns a
// const reference to this string. It also has a setType, of course!

// an attack() function that displays:
// NAME attacks with his WEAPON_TYPE
