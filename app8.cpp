/*
constant Variable 
 - Read Only Value
 - Can't Declare Without Value
*/


#include <iostream> 
using namespace std ;


// method not to use
#define DAYS 9;

int main()
{
    const int num =200 ; // The num variable is a constant integer, meaning its value should be initializad. 
    // num = 300 ; //error meaning its value cannot be modified after initialization
    cout << num ;

    cout << "\n" << DAYS;

    // ex :
    // int salary = 1000;
    // const int workparday = 8

    return 0 ;
}