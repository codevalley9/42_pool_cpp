#pragma once

#include <iostream>
#include <string>
#include <iomanip>

struct Contact
{
    void set_first_name(std::string);
    void set_last_name(std::string);
    void set_nickname(std::string);
    void set_login(std::string);
    void set_postal_address(std::string);
    void set_email_address(std::string);
    void set_phone_number(std::string);
    void set_birthday_data(std::string);
    void set_favorite_meal(std::string);
    void set_underwear_color(std::string);
    void set_darkest_secret(std::string);
    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_login() const;
    std::string get_postal_address() const;
    std::string get_email_address() const;
    std::string get_phone_number() const;
    std::string get_birthday_data() const;
    std::string get_favorite_meal() const;
    std::string get_underwear_color() const;
    std::string get_darkest_secret() const;

    int m_index;
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
};