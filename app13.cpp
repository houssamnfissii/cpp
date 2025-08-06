/*
Primative Data Types
  - int => Integer
  --- Test Numbers
  --- Test Floating Point vs Int
  --- Store From -2,147,483,648 to 2,147,483,647
  --- INT_MIN and INT_MAX constants
  --- Check limits Header File limits.h
  --- Test Size of Data Types Without Variables & Use End line


  -.= Assignment Operator
*/


#include <iostream>

#include <limits.h>

using namespace std ;


int main()
{
   int num1 = 200;
   int num2 = -20 ;
   int num3 = 0  ;
   int num4 = true ;
  //  int num5 = "Houssam" ; // error 
  cout << num4  << endl; // num4 = 1 
  cout << num3  << endl; 
  cout << num2  << endl; 
  cout << num1  << endl; 


  //=================

  cout << INT_MAX << endl;
  cout << INT_MIN << endl;


  //===============

  
  cout << sizeof(int) << endl;
  cout << sizeof(char) << endl;
  cout << sizeof(float) << endl;
  cout << sizeof(double) << endl;
  cout << sizeof(bool) << endl;


  // ===================

  int last_num = 10.5;
  cout << last_num << endl;  // 10


  //===================

  // = : assignment Operator =>


    
    return 0 ;
}