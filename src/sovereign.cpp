#include "../include/sovereign.h"
#include "../include/sha256.h"

using std::string;
using std::cout, std::endl;

Sovereign::Sovereign(uint32_t _num, const string &_str) : num(_num), str(_str)
{
    cout << "Creting sovereign object" << endl;
}

Sovereign::Sovereign(const Sovereign& s) : num(s.num), str(s.str)
{
    cout << "Copying sovereign object" << endl;
}

string Sovereign::merkle_root()
{
    string num_str = std::to_string(num);
    const string num_hash = sha256(num_str);
    const string str_hash = sha256(str);

    const string concat = num_hash + str_hash;
    return sha256(concat);
}

void Sovereign::merkle_proof_num(uint32_t& num, string& str_hash)
{
    num = this->num;
    str_hash = sha256(str);
}

bool Sovereign::assert_merkle_proof_num(uint32_t num, const string& str_hash, const string& merkle_root)
{
    string num_str = std::to_string(num);
    const string num_hash = sha256(num_str);
    
    const string concat = num_hash + str_hash;
    const string hash = sha256(concat);
    return hash == merkle_root;
}

std::ostream& operator<<(std::ostream& os, const Sovereign& s)
{
    return os << "(" << s.num << ", " << s.str << ")";
}