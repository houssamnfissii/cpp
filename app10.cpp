/*
Espace Sequences Characters
--- Special Non Printing Characters 
--- Control Printing Behviour
--- Start With Back Slash "\"
--- Can be Inserted In any Position
- \n
- \\
- \"
- \'
- \t => Tab Equal 8 Spaces
- \b
- \a => Alert => Play During Execution
- \r = > Carriage Return

*/



#include <iostream>

using namespace std;

// ✅ Exercise 1: Print a Formatted Receipt
// Goal: Use \n, \t, and \"
// 📝 Task: Print a receipt like this:

// markdown
// Copier
// Modifier
// =====================
// =  "My Store"       =
// =  Product: Honey   =
// =  Price:\t100 DH  =
// =====================



int ex1()
{
    cout << "=====================\n";
    cout << "= \"My Store\"\t    =\n";
    cout << "=  Product: Honey   =\n";
    cout << "=  Product:\\t100 DH =\n";
    cout << "=====================\n";
    return 0 ;


}
// ✅ Exercise 2: Print a Path on Windows
// Goal: Use \\
// 📝 Task: Print the following file path:

// C:\Users\Houssam\Documents\project.cpp

int ex2(){

    cout << "c:\\Users\\Houssam\\Documents\\project.cpp";
    return 0 ;
}

// ✅ Exercise 3: Backspace Simulation
// Goal: Use \b
// 📝 Task: Write code that prints:

// HelloWolrd

// Using backspace (\b) to remove the extra character in "Wolrd" and fix it to "World"

int ex3()
{
    cout << "HelloWolrd\b\b\b\borld"; 
    return 0 ;
}
int main()
{
  cout << "Line 1\n";
  cout << "Line 2\n";
  cout << "Line 3\\\n"; // this 2 backslah is for printing 
  cout << "Line \"4\"\n";  // if i write  cout << "line "4""; it give error 

  cout << "Line 5\n";
  cout << "Line\t\t6\n"; // tab = 8 spaces

  cout << "Line\b7\n" ; // backspace its print Lin7

  cout << "Line 8\a\n" ;

  cout << "HossamHOUSSAM\rNfissi\n" ; // NfissiHOUSSAM

//  ex1();
//  ex2();
   ex3();

  return 0 ;


}





