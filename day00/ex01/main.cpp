// #pragma once
#include "phoneBook.hpp"

void menu(int sum) 
{
    std::cout << "Hi guy! There are ";
    std::cout << sum << " contacts in this AWESOME phone book RN!" << std::endl;;
    std::cout << "U can use only 3 commands:" << std::endl;
    std::cout << "'ADD' - will help you add a new contact (but max 8, lol)" << std::endl;
    std::cout << "'SEARCH' - if you want to find information about contact" << std::endl;
    std::cout << "'EXIT' - means you're closing this awesom phonebook, bro" << std::endl;
    std::cout << "And now you can enter the command:" << std::endl;
}

// int add_comand()
// {
//     Contact contact;
//     Contact *cntct = &contact;// обращаемся к полям и функции объекта через указатель
//     std::cout << "Enter first_name:" << std::endl;
//     std::cin >> cntct->first_name;
//     // std::cout << cntct->first_name << std::endl;
//     return 0;
// }

int main()
{
    int sum = 0;
    menu(sum);
    Contact contact[8];
    std::string command;
    std::cin >> command;
    if(command == "ADD")
    {
        if(sum < 9)
        {
            for(int i = 0; i < 8; i++)
            {
                contact[i] = add_contact();
            }
        }
        
        sum++;
    } else
    return 0;
}