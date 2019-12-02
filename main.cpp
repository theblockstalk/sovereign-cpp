#include <iostream>
#include "include/sovereign.h"

using namespace std;

int main()
{
    cout << "Create a sovereign data entity" << endl;
    
    Sovereign data1 = Sovereign(1111, "grape");
    string data1_proof = data1.merkleRoot(); // Put this on chain
    cout << "Sovereign data object 1: " << data1 << endl;
    

    return 0;
}