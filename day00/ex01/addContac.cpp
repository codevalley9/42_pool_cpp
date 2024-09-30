// // #pragma once
#include "phoneBook.hpp"
// #include "main.cpp"



Contact add_contact()
{
    Contact new_contact;
    Contact *c = &new_contact;// обращаемся к полям и функции объекта через указатель
    std::cout << "Enter first name:" << std::endl;
    std::cin >> c->first_name;
    // std::cout << cntct->first_name << std::endl;
    std::cout << "Enter last name:" << std::endl;
    std::cin >> c->last_name;
    std::cout << "Enter nickname:" << std::endl;
    std::cin >> c->nickname;
    std::cout << "Enter login:" << std::endl;
    std::cin >> c->login;
    std::cout << "Enter postal address:" << std::endl;
    std::cin >> c->postal_address;
    std::cout << "Enter email address:" << std::endl;
    std::cin >> c->email_address;
    std::cout << "Enter phone number:" << std::endl;
    std::cin >> c->phone_number;
    std::cout << "Enter birthday data:" << std::endl;
    std::cin >> c->birthday_data;
    std::cout << "Enter favorite meal:" << std::endl;
    std::cin >> c->favorite_meal;
    std::cout << "Enter underwear color:" << std::endl;
    std::cin >> c->underwear_color;
    std::cout << "Enter darkest secret:" << std::endl;
    std::cin >> c->darkest_secret;
    return new_contact;
}