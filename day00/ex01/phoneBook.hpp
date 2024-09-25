#pragma once

#include <iostream>
#include <string>

class Contact
{
public:
    void add_first_name(std::string);
    void add_last_name(std::string);
    void add_nickname(std::string);
    void add_login(std::string);
    void add_postal_address(std::string);
    void add_email_address(std::string);
    void add_phone_number(std::string);
    void add_birthday_data(std::string);
    void add_favorite_meal(std::string);
    void add_underwear_color(std::string);
    void add_darkest_secret(std::string);

        
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::srting phone_number;
    std::string birthday_data;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;
}