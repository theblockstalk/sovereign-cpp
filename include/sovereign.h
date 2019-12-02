#ifndef sovreign_h
#define sovereign_h
#include <string>
#include <iostream>

class Sovereign
{
    public:
        Sovereign(uint32_t _num, const std::string &_str);
        Sovereign(const Sovereign& s);

        std::string merkle_root();

        void merkle_proof_num(uint32_t& num, std::string& str_hash);

        static bool assert_merkle_proof_num(uint32_t num, const std::string& str_hash, const std::string&);

        friend std::ostream& operator<<(std::ostream& os, const Sovereign& s);
    private:
        uint32_t num;
        std::string str;
};

#endif