#pragma once
#include "contact.hpp"

class PhoneBook
{
public:
    void menu();
    void addContact();
    void findContact(const std::string& name) const;
    void printContact(const Contact* contact) const;
private:
    Contact contacts[7];
    int m_size = 0;
};
