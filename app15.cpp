/*
Primitive Data Types

- Char => Character
--- added Inside Single Quotes => Test With Auto 
--- ASCII Value
--- ASCII => American Standard Code For Information Interchange.
--- A way of Representing Characters As Numbers


--- Search For Type Casting
--- Create App To Convert ASCII To Character
--- Create App To Convert Character to ASCII
*/



#include <iostream>


using namespace std;


int main()
{
    char a = 'A';
    cout << sizeof(a) << "\n" ; // 1 byte


     auto b = 'B';
    cout << sizeof(b) << "\n" ; // 1 byte

    auto c = "C"; // because it a string
    cout << sizeof(c) << "\n" ; // 8 bytes


  // type Casting
  // --- character to ASCII
    char d = 'Z';
    cout << int(d) << endl; // 90 is a ASCII value of 'Z'

    cout << int('A') << endl; // 65
    cout << int('%') << endl; // 37
    cout << int('(') << endl; // 40
    cout << int(')') << endl; // 41
    // cout << int("H") << endl; // ERROR

// --- ASCII to Character

   cout << char(65) << endl ; // A





    return 0 ;
}