#include "PhoneBook.hpp"

Contact::Contact(void)
{
}


Contact::~Contact(void)
{
}

Phonebook::Phonebook(void)
{
}


Phonebook::~Phonebook(void)
{
}

Contact *Phonebook::get_empty_contact(void)
{
    int     i;

    for (i = 0; i < 8; i++)
    {
        if (!(this->contacts[i].first_name[0]))
            return &(this->contacts[i]);
    }
    return NULL;
}

void    Phonebook::add(Contact *empty_contact)
{
    //need to protect against wrong entry : str instead of int
    std::cout << "Enter First Name" << std::endl;
    std::cin >> empty_contact->first_name;
    std::cout << "Enter Last Name" << std::endl;
    std::cin >> empty_contact->last_name;
    std::cout << "Enter Nickname" << std::endl;
    std::cin >> empty_contact->nickname;
    std::cout << "Enter Phone Number without space" << std::endl;
    std::cin >> empty_contact->phone_number;
    std::cout << "Enter Darkest secret" << std::endl;
    std::cin >> empty_contact->darkest_secret;
}

void    Phonebook::print_entire_phonebook(void)
{
    int     i;

    for (i = 0; i < 8; i++)
    {
        if (this->contacts[i].first_name[0] == '\0')
            continue;
        std::cout << "\n Contact Number " << i << std::endl;
        std::cout << "First Name : " << this->contacts[i].first_name << std::endl;
        std::cout << "Last Name : " << this->contacts[i].last_name << std::endl;
        std::cout << "Nickname : " << this->contacts[i].nickname << std::endl;
        std::cout << "Phone Number : " << this->contacts[i].phone_number << std::endl;
        std::cout << "Darkest secret : " << this->contacts[i].darkest_secret << std::endl;
    }
}
