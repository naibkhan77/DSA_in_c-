#include <iostream> 
using namespace std; 

// Decimal to binary 

// int decToBinary(int decNum) {
//     int ans = 0, pow = 1;

//     while(decNum > 0) {
//         int rem = decNum % 2; 
//         decNum /= 2; 

//         ans += (rem * pow); 
//         pow *= 10; 
//     } 

//     return ans; // binary form 
// }

// 

//  binary to decimal 

int binToDecimal(int binNum) {
    int ans = 0, pow = 1; 

    while(binNum > 0) {
        int rem = binNum % 10; 
        ans += rem * pow; 

        binNum /= 10; 
        pow *= 2; 
    }
    return ans;  // decimal form 
}

int main() {


    // int decNum = 50; 
    // cout<< decToBinary(decNum) << endl; 

    // 

    // binary to decimal 

    cout<< binToDecimal(101) <<endl; 

    return 0; 

}