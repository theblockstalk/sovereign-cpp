#include "../include/sovereign.h"

using std::string;
using std::cout, std::endl;

Sovereign::Sovereign(uint32_t _num) : num(_num) {
    cout << "creting sovereign object" << endl;
}

uint32_t Sovereign::getData() {
    return num;
}

// string Sovereign::getName() {
//     return this->name;
// }