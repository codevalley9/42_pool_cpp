#include "phone_book.h"

void PhoneBook::addContact(Contact& contact) {
    m_contacts[m_size++] = contact;
}

const Contact* PhoneBook::findContact(const std::string& name) const{
    // if finded
    // return contact;
    // else
    // return nullptr; 
}