#include <iostream>
#include "include/sovereign.h"
#include "include/sha256.h"

using namespace std;

int main()
{
    cout << "Create a sovereign data entity" << endl;
    
    Sovereign s = Sovereign(1111);

    cout << s.getData() << endl;
    string digest = "grape";
    cout << "sha256(" << digest << ") = " << sha256(digest) << endl;

    return 0;
}