#ifndef sovreign_h
#define sovereign_h
#include <string>
#include <iostream>

class Sovereign
{
    public:
        Sovereign(const uint32_t, const std::string);
        Sovereign(const Sovereign&);

        std::string merkleRoot();

        friend std::ostream& operator<<(std::ostream& os, const Sovereign& s);
    private:
        uint32_t num;
        std::string str;
};

#endif