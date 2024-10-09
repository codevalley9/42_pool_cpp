#pragma once

#include "contact.h"

class PhoneBook
{
public:
    void addContact(Contact& contact);
    const Contact* findContact(const std::string& name) const;
private:
    Contact m_contacts[3];
    int m_size = 0;
};