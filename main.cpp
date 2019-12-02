#include <iostream>
#include "include/sovereign.h"

using namespace std;

int main()
{
    cout << "Create a sovereign data entity" << endl;
    
    uint32_t num1 = 1111;
    string str1 = "grape";
    Sovereign data1 = Sovereign(num1, str1);
    string data1_proof = data1.merkle_root(); // Put this on chain
    cout << "Sovereign data object 1: " << data1 << endl;
    
    uint32_t num_data1;
    string str_hash_data1;
    data1.merkle_proof_num(num_data1, str_hash_data1);
    bool check_proof = Sovereign::assert_merkle_proof_num(num_data1, str_hash_data1, data1_proof);
    cout << "Data one proof is correct: " << check_proof << endl;

    check_proof = Sovereign::assert_merkle_proof_num(num_data1+1, str_hash_data1, data1_proof);
    cout << "Data one proof is correct: " << check_proof << endl;

    Sovereign data2 = Sovereign(data1);
    string data2_proof = data2.merkle_root(); // Put this on chain
    cout << "Sovereign data object 2: " << data2 << endl;

    return 0;
}