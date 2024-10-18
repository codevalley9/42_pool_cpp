
#include "phone_book.hpp"

int main()
{
    std::cout << "Hi GAY!" << std::endl;
    PhoneBook book;
    book.menu();
    std::string command;
    std::cin >> command;
    while (command != "EXIT")
    {
        if(command == "ADD") {
            book.addContact();
        } else if(command == "SEARCH") {
            std::string search_name;
            std::cout << "Please enter first name of searching contact" << std::endl;
            std::cin >> search_name;
            book.findContact(search_name);
        }
        book.menu();
        std::cin >> command;
    }
    return 0;
}