#include <iostream>
#include <typeinfo> 
#include <string>
#include <iomanip> // For std::setprecision


using namespace std ;


int main(){
    
    int Age = 20;
    float pi = 3.14;
    double price = 10.99;
    char letter  = 'A';
    bool IsActive = true;
    
    cout << Age << endl;
    cout << pi << endl;
    cout << price << endl;
    cout << letter << endl;
    cout << IsActive << endl;
    
    // double vs foalt
    /*
    
    foalt : Basic decimal / size = 4 bytes	/ Precision ~7 digits
    double : High precision decimal / size = 8 bytes /  Precision ~15 digits
    float pi = 3.1415926f;
    double bigPi = 3.141592653589793;

   
    
    // char  :Stores a single symbol: letter, number, punctuation and Written in single quotes: 'A', '1', '$'

    char grade = 'A';
    
    // bool :Stores either true or false and it Used in logic and conditions
    
    bool isOnline = true;
    
    
    
    ---> Type Modifiers for integer types to control size or sign.
    Modifier	Description
    short	    Smaller integer (2 bytes)
    long	    Larger integer (8 bytes)
    long        long	Very large integers
    unsigned	Only positive values (no negative)
    exemple
    short a = 10000;
    long b = 1000000;
    unsigned int age = 20;
    
    
    🧠 How Much Memory?
        Type	Size (Bytes) (64-bit system)
        
        int  	    4
        float	    4
        double	    8
        char	    1
        bool	    1
        short	    2
        long	    8
        long long	8

----> auto Keyword (Advanced)
    */
     auto year = 2025;       // int
     auto ppprice = 9.99;   // double
     auto username = "Ali";   // const char*
     
     
     /*
     🧠 typeid (Advanced Type Info)
     #include <typeinfo> 

     */
     auto x = 42.03;
     cout << typeid(x).name() << "\n"; // Shows: 'double'
     
     
    //  ---> Practical Example: KB → Bytes → Bits
    
    // int kb;
    // cout << "Enter Kilobytes: ";
    // cin >> kb;
    // int  bytes = kb * 1024;
    // int bits = bytes * 8 ;
    
    // cout << "Kilobytes: " << kb << "\n";
    // cout << "Bytes: " << bytes << "\n";
    // cout << "Bits: " << bits << "\n";
     
     
     // ---->🧠 How Strings Work?
      // #include <string>
      
    // string name = "Houssam";
    // cout << name << "\n";
    // cout << "Length: " << name.length() << "\n";
    // 🧠 Each character = 1 byte (in ASCII).
    //     "Houssam nfissi" = 14 bytes
    
    
    
    
   // 🎯 Exercises
    // ✅ Exercise 1: Basic Variables
    // Declare and print:
    
    // Your name (string)
    
    // Your age (int)
    
    // Your GPA (float)
    
    // Whether you are a student (bool)
    
    
    // char* name = "Houssam";
    // string name = "Houssam";
    // cout << name ;
    // int Myage = 20;
    // float note = 19.55;
    // bool isStudent = false;
    
    
    
    
    // ✅ Exercise 2: Storage Converter
    //     Ask the user for a number of megabytes, and:
        
    //     Convert to kilobytes
        
    //     Convert to bytes
        
    //     Convert to bits
    
    // int megabytes;
    // cout << " Enter a number of megabytes :  ";
    // cin >> megabytes;
    
    // int kilobytes = 1024*megabytes;
    // int bytes = kilobytes * 1024;
    // int bits = bytes * 8 ;
    
    // cout << "kilobytes :\t" << kilobytes << endl;
    // cout << "bytes :\t" << bytes << endl;
    // cout << "bits :\t" << bits << endl;
    
    
    
    
    
    // 🧠 Final Challenge: Full Data App
    // Make a program that:
    
    // Asks the user:
    
    // string name
    
    // int age
    
    // double salary (in KB)
    
    // bool working
    
    // Outputs:
    
    // All user information
    
    // Salary in bits: salary × 1024 × 8
    
    // Use setprecision to print the decimal values
    
    
    
    string name ;
    int age ;
    double salary;
    bool working;
    
    cout << "What is your name:" ;
    cin >> name ;
    cout << endl;
     cout << "How old are you :" ;
     cin >> age ;
      cout << endl;
      cout << "What is you salary:";
    //   setprecision(13);
      cin >> salary;
      cout << endl;
      cout << "are you working : true or false ? : ";
      cin  >> working ;
      cout << endl;
      cout << "YOUR NAME IS :" << name << endl;
      cout << "YOUR AGE IS :" << Age << endl;
      cout << "YOUR SALARY IS (bits):" << salary*1024*8 << endl;
      cout << "WORKING: ";
        if (working = true) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
              
      
     
    
    

    return 0;
    
    }