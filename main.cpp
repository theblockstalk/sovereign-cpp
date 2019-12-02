#include <iostream>
#include "include/person.h"
#include "include/sovereign.h"

using namespace std;

int main()
{
    cout << "hello world" << endl;

    Person john = Person("John");
    cout << john.getName() << endl;
    
    Sovereign s = Sovereign(1111);

    cout << s.getData() << endl;
    return 0;
}