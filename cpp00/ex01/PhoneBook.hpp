#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <string>

class   Contact
{

    public:

        Contact(void);
        ~Contact(void);

        std::string  first_name;
        std::string  last_name;
        std::string  nickname;
        int          phone_number;
        std::string  darkest_secret;

};

class   Phonebook 
{

    public:

        Contact     contacts[8];

        Phonebook(void);
        ~Phonebook(void);

		Contact	*get_empty_contact(void);
        void    add(Contact *empty_contact);
        void    search(void);
		void    print_entire_phonebook(void);


};

#endif