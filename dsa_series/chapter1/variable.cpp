// Variable 
// containers to store data 

// Data Types 

// 1.int take 4bytes ||2.char 1byte || 3.float 4bytes || 4.bool 1byte || 5.double 8 bytes 

// 

#include <iostream> 
using namespace std; 

int main() {

    // primitive data types 

    // int

//    int age = 35; 
//    cout<<sizeof(age)<<endl;


    // char

//    char grade = 'A'; 
//    cout<<grade<<endl;


    // flot 

    // float PI = 3.14f; 
    // cout<<PI<<endl;


    // boolean 

    // bool isSafe = true;
    // cout<< isSafe << endl; // true -> 1 & false -> 0 


    // double 

    // double price = 100.88; 
    // cout<<price<<endl; 


    // Type Casting 
// converting data from one type to another 

    // char grade = 'A'; // ASCII 'A' is 65

    // int value = grade; 
    // cout<<value<<endl; // 65 

    // 
// explicit 

    // double price = 100.99; 
    // int newPrice = (int)price; // 100
    // cout<<newPrice<<endl; 

    // // same output 
    // double price = 100.99; 
    // int newPrice = price; // 100
    // cout<<newPrice<<endl; 


    //////////////////

    // cin
    
    // int age; 

    // cout<<"Enter the age: "; 
    // cin>>age;  
    // cout<<"your age is: " <<age<<endl;
        
    // 

    // double price; 

    // cout<<"Enter the price: "<<endl; 
    // cin>>price; 
    // cout<<"The price is: "<<price<<endl; 


    ////////

    // Operator 

    //  - + * / ^ % etc 

    // int a = 5, b = 10; 
    // cout<<(a+b)<<endl;

    // 


    // int a = 10; 
    // int b = 10; 
    // int sum = a + b; 
    // cout<<"the total number is: " <<sum<<endl; 

    // int a = 10, b = 5; 

    // cout<<"difference = " <<(a-b)<<endl; // 5
    // cout<<"product = " <<(a*b)<<endl; // 50
    // cout<<"divistion = " <<(a/b)<<endl; // 2
    // cout<<"modulo = " <<(a % b)<<endl; // 0

    // 

    // int a = 5; 
    // double b = 2; 

    // cout<<(a / b)<< endl; // 2.5 

    // int a = 5; 
    // double b = 2; 
    // int c = a / b; 

    // cout<<c<<endl; // ans 2 not 2.5 


    ////

    // relational operator // < / <= / > / >== / == / !=

    // cout<<(3 < 5)<<endl; // true which is 1 
    // cout<<(3 > 5)<<endl; // flase which is 0 
    // cout<<(3 <= 3)<<endl; 
    // cout<<(3 != 3)<<endl; 


    //  Logical  || OR,  && AND, ! NOT,

    // cout<< !(3 < 1 ) << endl; 

    // OR where just one condition is true the ans is true 

    // cout<< (3 > 1 || 3 > 5)<<endl; // 1

    // 
    // && AND  where just one conditon is false the False 

    // cout<<(3 > 1 && 3 > 5)<<endl; // 0

    //////

    // Unary & Binary operator 

    // ++a pre increment operator // a++ post increment operator 

    // unary means 1 and Binary means 2 

    // int a = 10; 

    // int b = a++; // first word, then update 
    // cout<<b<<endl;  //10
    // cout<<"a = " <<a<<endl; // 11
    

    //                             

    // int a = 10; 

    // int b = ++a; 
    // cout<<b<<endl; // 11

    // 

    int a = 10; 
    int b = a--; //9
    int b = --a; //9

    cout<<a<<endl;











   return 0;

} 