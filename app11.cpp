/*
 Data type
 -- What Is Data ?
 -- Data Exemples In Real Life 
  - Integer => 5000 , 10 , -100
  - String => "School" , "Houssam Nfissi" , "100A"
  - Boolean => true , false
  - Float =>  18.5 ,  1900.50
  - Array =>   ["Houssam" , "Ahmed" , "Said" , "Youssef"]
 -- Why we Choose Data ?
  - size 
  - Operation


  What is Operand ?
   - The Part of An Instruction Representing The Data Manipulated by The Operator
     exemple :
    int result = number1 / name;
    number1 → operand
    name → operand
  / → operator (division)
*/

#include <iostream>
using namespace std;


int main()
{
    int number = 10;
    string name = "Houssam";
    bool check = true;


    int number1 = 100;
    int number2 = 20;



    cout << sizeof(number) << "\n"; // 4 
    cout << sizeof(name) << "\n";  // 32
    cout << sizeof(check) << "\n"; // 1


    cout << number1 / number2 ; // 100 /20 = 5
    // cout << number1 / name ; // Error: Cannot divide number1 by name because they are different types (e.g., int / string is invalid)




    return 0;
}