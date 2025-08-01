

/*
variables Naming Rules & Best Practices
- Naming Rules:
1. Must Be unique
2. Cannot start with a number
3. Case sensitive (e.g., 'price' and 'Price' are different variables)
4. Nums or letters or underscore are allowed
5. Cannot use reserved keywords (e.g., 'int', 'return', 'if', etc.)
6. Cannot contain spaces or special characters (e.g., '@', '#', '$', etc.)
- Best Practices:
 1. Relevant names (e.g., 'price' for a price variable)
 2. Use camelCase or snake_case for readability (e.g., 'totalPrice' or 'total_price')

*/
#include <iostream>
using  namespace std ;

int main()
{

    int price = 20; // declare A new variable 
    price = 50 ; // update The value
    int pr1_ice = 550; // declare A new variable 
    cout << price ;
    cout << pr1_ice ;
    cout << "\n=====================\n";
    int _pr1_ice_ = 30;
    cout << _pr1_ice_ ;
    cout << "\n=====================\n";

   // int public = 100; // This is not allowed, 'public' is a reserved keyword
   // cout << public; // This line will cause a compilation error

   int camelCaseVariable = 100; 
   cout << camelCaseVariable; 
    cout << "\n=====================\n";
    int snake_case_variable = 200; 
    cout << snake_case_variable; 
    cout << "\n=====================\n";
    int HOUSSAM = 300;
    cout << HOUSSAM; // This is allowed, but not recommended as it doesn't follow naming conventions


    return 0 ;

}