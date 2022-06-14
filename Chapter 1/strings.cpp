#include <iostream>
#include <string>
using namespace std;

int main()
{
    // C++ strings use dynamic memory
    string name = "João Paulo";
    /* So if we append more text to a string
     * we don't neeed to worry about memory
     * corruption or cutting off strings
     */
    name = name + " de Faveri";
    cout << name << endl;
}