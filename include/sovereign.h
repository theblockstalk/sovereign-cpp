#ifndef sovreign_h
#define sovereign_h
#include <string>
#include <iostream>

class Sovereign
{
    public:
        Sovereign(const uint32_t, const std::string);

        std::string merkleRoot();

    private:
        uint32_t num;
        std::string str;
};
#endif