#include <iostream>
using namespace std;

// function definition 

// int printHello() {
//     cout<<"hello\n";

//     return 3; 
// }

// 

//  Parameters 

// int sum(int a, int b) {
//     int m  = a * b; 

//     return m; 
// }

// 

// min of 2 nums 

// int minOfTwo(int a, int b) {

//     if(a < b) {
//         return a; 
//     } else {
//         return b; 
//     }

// }

// 

// Qs calculate sum of numbers from 1 to N 


// int sumN(int n) {
//     int sum = 0;  

//     for(int i=0; i<=n; i++) {
//         sum += i; 
//     }

//     return sum; 
// }


//  

// Qs calculate N factorial 


// int factorialN(int n) {

//     int fact = 1; 

//     for (int i=1; i<=n; i++) {
//         fact *= i; 
//     }

//     return fact; 
// }

// 

// function in memory 



// int fun() {
//     return 2; 
    
//     cout<<"hello\n";

    
// }

// 


// Pass by value 
// Pass by value means a copy of the variable is sent to the function.

    // int sum(int a, int b) {
    //     return a + b; 
    // }

    // 

    // void changeX(int x) {
    //     x = 2*x; 
    //     cout<<"inside function  = " << x << endl; 
    // }

    //     // Qs Calculate sum of digits of a numbers 

    int sumOfDigits(int num) {
        int digSum = 0; 

        while(num > 0) {
            int lastDig = num % 10; 
            num /= 10; 

            digSum += lastDig; 
        }
        return digSum; 
    }








int main() {
    
    // int val =  printHello();
    // cout<<"value is : " << val<< endl; 
    // 
    // printHello();

    // 

    // parameters 

    // cout<< sum(2, 5) << endl; 

    // 

    // min of 2 nums 

    // cout<< "min is = " <<minOfTwo(10, 54)<< endl;  // arguments 

    // 

    // Qs calculate sum of numbers from 1 to N 

    // cout<< sumN(5) <<endl; 
    

    // 

    // Qs calculate N factorial 

    // cout<< factorialN(5)<<endl;

    // 
    
    // fun(); 

    // 

    // Pass by value 
    // Copy of argument is passed to function 

    // int x = 5, y = 4; 
    // cout << sum(x, y) << endl;

    // 

    // int a = 5; 
    // changeX(a); 

    // cout<<"inside main  = "<<a << endl; 

    // Qs Calculate sum of digits of a numbers 

    cout<<"sum = "<<sumOfDigits(2356)<<endl;




    return 0; 
}
