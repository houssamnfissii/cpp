/*

Primitive Data Types
- float = > Floating Point Number
--- Test Integer Value In Float Variable
--- We Make Sure its Float Not Double by Adding Suffix "f" Or "F"
--- Test With Auto
--- 7 Decimal Precision


- double => Double The Float 
--- 15 Decimal Precision

*/

#include <iostream>

using namespace std;



int main()
{
   int num1 = 10;
   num1 = 20.5;
   cout << sizeof(num1) << endl ; // 4 bytes
   cout << num1 << endl ; // 20


   double dob = 10;
   dob = 10.5;
   cout << sizeof(dob) << endl ; // 8 bytes
   cout << dob << endl ; // 10.5

   float fl = 10.5f + 9.5f ;
   cout << sizeof(fl) << endl ; // 4 bytes
   cout << fl << endl ; // 20


//    auto mix= 10 ; // int
//    auto mix= 10.f ; // float
//    auto mix= 10.0 ; // double 







  
   return 0;
}