/*
variables Basic knowledge
- Data containers with unique name "Indentifier"
- declare with value + change Later
*/


#include <iostream>
using namespace std;
// int main(){
//     std::cout << "Line 1 ";std::cout << "\nLine 3" ;
//     std::cout << "\nLine 2" ;

// }

/*
Syntax
 - [Date_type] [Variable_Name] = [Value];
*/

int main()
{
    int price = 200 ; // declar variable
    cout << "Price is: " << price;
    cout << "\nPrice After Adding 15 Is: " << price + 15;
    cout << "\nPrice After Adding 40 Is: " << price + 40;
    price = 150 ;
    cout << "\nThe New Price is: " << price ;
    return 0 ;
}