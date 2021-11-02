#include "PhoneBook.hpp"

int main( void )
{
    std::string     cmd;
    Phonebook       phonebook;

    while (1)
    {
        std::cout << "AwesomePhoneBook : what do you want to do ? [ADD, SEARCH, EXIT]" << std::endl;
        std::cin >> cmd;
        if (cmd == "ADD")
            phonebook.add(phonebook.get_empty_contact());
        else if (cmd == "SEARCH")
            std::cout << "SEARCH" << std::endl;
        else if (cmd == "EXIT")
            //empty memory
            break;
        phonebook.print_entire_phonebook();
    }
}