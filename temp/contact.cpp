#include "contact.h"

int Contact::getId() const {
    return m_id;
}

void Contact::setId(int id) {
    Contact::m_id = id;
}