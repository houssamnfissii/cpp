#include <iostream>

using namespace std ;

// int x= 50;
// int main(){
//     int x= 60 ;
//     cout << ::x ; // operator de porte : get  value of varibale global ;

// }
/*
     int f1(int *a){
        cout << *a ;
        return 0;
     }


int main(){
     int x = 100;
     int *ptr ;
     ptr=&x;
     cout << ptr << "\n";
    f1(ptr);
    cout << *ptr ;

   return 0;

}
   */

//    int main()
//    {

//     int a = 20;
//     int *ptr1;
//     ptr1=&a;
//     int **ptr2;
//     ptr2=&ptr1;
//     cout << ptr1 << "\n";
//     cout << *ptr1 << "\n";
//     cout << &ptr1 << "\n";
//     cout << ptr2 << "\n";
//     cout << **ptr2 << "\n"; // 
//     cout << &a;

//    }


// int main(){
   
//      // delaration of table dynamique
//     // int *ptr = (int*) malloc(10* sizeof(int));
//     // for(int i =0; i<=9;i++){
//     //     *(ptr+i)  =i;
//     // }
//    // delaration of table static
//     int tab[10]={100,1,2,3,4,5,6,7,8,9};


//      cout << *(tab+1 );   // tab name is a pointer of first elements of his self! 
//     // for(int i =0; i<=9;i++){
//     //     tab[i] =i;
//     // }



//     // for(int g=0 ; g<=9;g++){
//     //     cout <<  *(ptr+g) << "\t" ;
//     //     cout <<  (ptr+g) << "\t" ;
//     // }
// }


int main(){

    float a ; int b = 7, c =4 ;
    cout << sizeof(b) <<endl ;
    a = (float)b/c;
    cout << sizeof(float)<< endl;
    cout << a <<endl;
    a = b/c;
    cout << a ;
    

    return 0;
}