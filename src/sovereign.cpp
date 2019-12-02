#include "../include/sovereign.h"
#include "../include/sha256.h"

using std::string;
using std::cout, std::endl;

Sovereign::Sovereign(const uint32_t _num, const string _str) : num(_num), str(_str)
{
    cout << "Creting sovereign object" << endl;
}

Sovereign::Sovereign(const Sovereign& s) : num(s.num), str(s.str)
{
    cout << "Copying sovereign object" << endl;
}

string Sovereign::merkleRoot()
{
    string num_str = std::to_string(num);
    const string num_hash = sha256(num_str);
    const string str_hash = sha256(str);

    const string concat = num_hash + str_hash;
    return sha256(concat);
}

std::ostream& operator<<(std::ostream& os, const Sovereign& s)
{
    return os << "(" << s.num << ", " << s.str << ")";
}