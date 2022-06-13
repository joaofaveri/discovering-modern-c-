#include <iostream>
using namespace std;

int main ()
{
    // Single-line comment start with two forward slashes
    /* Multi-line comment start with /* and ends with star and forward slashe
     * Any text here will be ignored by the compiler
     * Declaring (Creating) Variables:
     * type variableName = value;
     */
    
    int age = 41;
    float pi = 3.14159;
    double exp = 1.5e6;
    char gender = 'M'; // char values are surrounded by single quotes
    bool isAdmin = true;

    cout << "Variables:" << endl;
    cout << endl
    cout << "I am " << age << "years old." << endl;
    cout << "The pi value is approximately equal to " << pi << endl;
    cout << "Creating an exponential double type variable: " << exp << endl;
    cout << "My gender is " << gender << endl;
    cout << "Am I a admin? " << isAdmin << endl;
    
    return 0;        
}
