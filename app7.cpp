
/*

Variables scope
 - Global variable
 - Local Variable
*/

#include <iostream>
using namespace std;


int a = 100; // Global variable


int second()
{
    int b = 200; // Global variable
    cout << a << "Coming from Second Function \n";
    cout << b << "Coming from Second Function \n";
    return 0;
}

int main() {
    
    cout << a << "Coming from Main Function \n";
    // cout << b << "Coming from Main Function \n"; error: 'b' is not declared in this scope    
    second(); // Call the second function
    return 0;
}

