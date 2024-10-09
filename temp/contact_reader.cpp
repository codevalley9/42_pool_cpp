#include "contact_reader.h"

#include <iostream>

Contact ContactReader::ReadContact() {
    Contact c;
    std::cin >> c.id;
    return c;
}