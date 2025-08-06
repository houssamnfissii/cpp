/*
Calculate Your age Application

*/

#include <iostream>

using namespace std;

int main(){


    // int YearOfBirth ;
    // cout << "Enter you year of birth \n" ;
    // cin >> YearOfBirth ;
    // cout << "Your age is " << 2025 - YearOfBirth ;

    cout << "===================================\n";
    cout << "==Calculate Your age Application===\n";
    cout << "===================================\n";


// first program

    int age;

    cin >> age ;
    

    int age_in_days = age * 365 ;
    int age_in_hours = age_in_days * 24 ;
    int age_in_minutes = age_in_hours * 60;
    int age_in_seconds = age_in_minutes * 60 ;


    cout << "Age in Days Is : "<< age_in_days << " Days\n";
    cout << "Age in Hours Is : "<< age_in_hours << " Hours\n";
    cout << "Age in minutes Is : "<< age_in_minutes << " minutes\n";
    cout << "Age in seconds Is : "<< age_in_seconds << " seconds\n";



    return 0 ;
}