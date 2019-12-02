#ifndef sovreign_h
#define sovereign_h
#include <string>
#include <iostream>

class Sovereign
{
    public:
        Sovereign(uint32_t);

        uint32_t getData();

    private:
        uint32_t num;
};
#endif