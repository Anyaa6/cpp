#include <iostream>
#include <string>

Test::Test()
{
    nb_instance = 0;
}

class Test
{
    public:
        static int const   nb = 12;
        static int          nb_instance;
        Test();
        ~Test();
};

int main()
{
    std::string name;
    std::string adress;
    std::string phone;

    std::cout << Test::nb << std::endl;

    std::cout << "Give me your name" << std::endl;
    std::cin >> name;

    std::cout << "Give me your adress" << std::endl;
    //std::cin >> adress;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // std::cin >> std::ws;
    getline(std::cin, adress);

    std::cout << "Give me your phone" << std::endl;
    std::cin >> phone;

    std::cout << "name = " << name << " adress = " << adress << " phone = " << phone << std::endl;

}

