//#pragma once

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

class Contact
{
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_number;
    std::string birthday_data;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;

    void set_first_name(std::string);
//     void set_last_name(std::string);
//     void set_nickname(std::string);
//     void set_login(std::string);
//     void set_postal_address(std::string);
//     void set_email_address(std::string);
//     void set_phone_number(std::string);
//     void set_birthday_data(std::string);
//     void set_favorite_meal(std::string);
//     void set_underwear_color(std::string);
//     void set_darkest_secret(std::string);

        
// private:
    char index;
    // std::string first_name;
    // std::string last_name;
    // std::string nickname;
    // std::string login;
    // std::string postal_address;
    // std::string email_address;
    // std::string phone_number;
    // std::string birthday_data;
    // std::string favorite_meal;
    // std::string underwear_color;
    // std::string darkest_secret;
} C;

#endif