
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
    int b = 200; // local variable
    cout << a << "Coming from Second Function \n";
    cout << b << "Coming from Second Function \n";
    return 0;
}



int F1()
{
    int G = 2;
    int k= 1000;
    cout << k << " coming from F1 function \n ";
    return 0 ;

}


int main() {
    
    // cout << G << "\n" ;  error because this variable delacred in F1 (local variable)! 
    F1();
    cout << a << "Coming from Main Function \n";
    // cout << b << "Coming from Main Function \n"; error: 'b' is not declared in this scope    
    second(); // Call the second function
    return 0;
}



