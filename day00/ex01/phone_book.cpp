#include "phone_book.hpp"

void PhoneBook::menu() 
{
    std::cout << "There are ";
    std::cout << m_size << " contacts in this AWESOME phone book RN!" << std::endl;;
    std::cout << "U can use only 3 commands:" << std::endl;
    std::cout << "'ADD' - will help you add a new contact (but max 8, lol)" << std::endl;
    std::cout << "'SEARCH' - if you want to find information about contact" << std::endl;
    std::cout << "'EXIT' - means you're closing this awesom phonebook, bro" << std::endl;
    std::cout << "And now you can enter the command:" << std::endl;
}

void PhoneBook::addContact()
    {
        Contact c;
        std::cout << "Enter first name:" << std::endl;
        std::cin >> c.first_name;
        std::cout << "Enter last name:" << std::endl;
        std::cin >> c.last_name;
        std::cout << "Enter nickname:" << std::endl;
        std::cin >> c.nickname;
        std::cout << "Enter login:" << std::endl;
        std::cin >> c.login;
        std::cout << "Enter postal address:" << std::endl;
        std::cin >> c.postal_address;
        std::cout << "Enter email address:" << std::endl;
        std::cin >> c.email_address;
        std::cout << "Enter phone number:" << std::endl;
        std::cin >> c.phone_number;
        std::cout << "Enter birthday data:" << std::endl;
        std::cin >> c.birthday_data;
        std::cout << "Enter favorite meal:" << std::endl;
        std::cin >> c.favorite_meal;
        std::cout << "Enter underwear color:" << std::endl;
        std::cin >> c.underwear_color;
        std::cout << "Enter darkest secret:" << std::endl;
        std::cin >> c.darkest_secret;
        c.m_index = m_size;
        contacts[m_size++] = c;
    }

void PhoneBook::findContact(const std::string& name) const {  
    for(int i = 0; i < m_size; i++) {
        if(contacts[i].first_name == name) {
            printContact(&contacts[i]);
        }
    }
}

void PhoneBook::printContact(const Contact* contact) const {
    int n = 10;
    std::string s_index = std::to_string(contact->m_index);
    std::cout << "|index     |first name|last name |nickname  |" << std::endl;
    std::cout << "|" << std::setw(n) << std::right << s_index.substr(0,9) + (s_index.size() > 9 ? "." : "EXI");
    std::cout << "|" << std::setw(n) << std::right << contact->first_name.substr(0,9) + (contact->first_name.size() > 9 ? "." : "");
    std::cout << "|" << std::setw(n) << std::right << contact->last_name.substr(0,9) + (contact->last_name.size() > 9 ? "." : "");
    std::cout << "|" << std::setw(n) << std::right << contact->nickname.substr(0,9) + (contact->nickname.size() > 9 ? "." : "") << "|" << std::endl;
};
