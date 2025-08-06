/*

Data Types


- Ram : [R]andom [A]ccess [M]emory
--- Computer Memory Has Locations


- Data Sizes
--- Bit => [Bi]nary Digi[t] => Smallest unit in Storage Store Only 0 or 1
--- Byte => A Group Of 8 Bit => Store Single character
--- Kilo Byte => 1024 Byte
--- Mega Byte => 1024 Kilobytes
--- Giga Byte => 1024 Megabytes
--- Terra Byte => 1024 Gigabytes


- Data Types With Size
--- int => 2 Or 4 Bytes => Will Cover Later Why
--- float => 4 Bytes [18.5656565656]
--- double => 8 Bytes [18.5656565656]
------    Number. Fractional Component(fasila)
--- char => 1 Byte => Single Character ('A', 'b', '1', '$')
--- boolean => 1 Byte => true or false

- Double vs Float
// --- float => 4 Bytes => 7 Decimal Places
// --- double => 8 Bytes => 15 Decimal Places

- The Story behind Creating A variable
--- Decalre A Variable
--- Tell The Computer That we Need To Reserve X Bytes In Memory Depend On Data type
-- Restrict Type Of Data to The Type we choosed

- Declare Variable Without Type
- See Memory Address & 

- Application to Create
--- Create  app askt you to Type Number to Kilobytes
--- Write 3 Lines Contains
------[1] The Number of Kilobytes That user Input
------[2] The Number Of Bytes
------[3] The Number Of Bits

*/



#include <iomanip> // For std::setprecision
#include <iostream>
using namespace std;


int main()
{
    // cout << setprecision(13) << "\n";

    // float floatNumber = 10.1234567891; 
    // cout << floatNumber << "\n";
    // double doubleNumber = 10.1234567891; // best paractice 

    // cout << doubleNumber << "\n";


    // int Number = 100;
    // cout << &Number << "\n"; // Memory Address of Number Variable
    // int* ptr ;
    // ptr = &Number;
    // cout << *ptr ;




 int numberKilo;

    cout << "Please enter a number of Kilobytes: ";
    cin >> numberKilo;

    int numberBytes = numberKilo * 1024;
    int numberBits = numberBytes * 8;

    cout << "\nChoose an option:\n";
    cout << "1. Show Bytes Only\n";
    cout << "2. Show Bits Only\n";
    cout << "3. Show Both\n";
    cout << "Enter your choice (1/2/3): ";

    char type;
    cin >> type;

    switch (type) {
        case '1':
            cout << "Bytes: " << numberBytes << endl;
            break;
        case '2':
            cout << "Bits: " << numberBits << endl;
            break;
        case '3':
            cout << "Bytes: " << numberBytes << "\nBits: " << numberBits << endl;
            break;
        default:
            cout << "Invalid option selected!" << endl;
            break;
    }

    return 0;

}