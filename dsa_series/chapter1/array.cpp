#include <iostream> 
#include <climits>
using namespace std; 

// pass by reference

// void changeArr(int arr[], int size) {
//     cout<<"in function\n"; 
//     for(int i=0; i<size; i++) {
//         arr[i] = 2* arr[i]; 
//     }
// }

// 

// linear search

// int linearSearch(int arr[], int sz, int target) {
//     for(int i=0; i<sz; i++) {
//         if(arr[i] == target) { // found
//             return i; 
//         }
//     }
//     return -1; // not found
// }

// 

// reverse array 

void reverseArray(int arr[], int sz) {
    int start = 0; int end = sz-1; 

    while(start < end) {
        swap(arr[start], arr[end]); 
        start ++; 
        end --; 
    }    
}




int main() {

    // reverse array 
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; 
    int sz = 7; 

    reverseArray(arr, sz); 

    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" "; // output 7 6 5 4 3 2 1 reverse
    }
    cout<<endl;


    // 

    // linear search 

    // int arr[] = {4, 2, 7, 8, 1, 0, 10}; 
    // int sz = 7; 
    // int target = 0; 

    // cout<<linearSearch(arr, sz, target) << endl; // index 5 which is = 0 
    // return 0; 

    


    // 


    // pass by reference

    // int arr[] = {1, 2, 3}; 

    // changeArr(arr, 3); 

    // cout<<"in main\n"; 
    // for(int i=0; i<3; i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // 

    // int marks[5] = {99, 88, 77, 66, 35}; 

    // cout<<marks[5]<<endl; 
    // cout<<marks[0] << endl; 
    // cout<<marks[1]<<endl; 

    // 

    // loops 

    // int marks[5] = {99, 77, 66, 35, 90};  
    // int size = 5; 
    
    // cout<< sizeof(marks) / sizeof(marks[0]) << endl; // 5 
    // cout<< sizeof(marks) << endl; // 20
    // cout<< sizeof(int) << endl; // 4
    // cout<< sizeof(marks) / sizeof(int) << endl; 

    // loops 

    // for(int i=0; i<size; i++){
    //     cout<<marks[i]<<endl;
    // }


    // 

    // int size = 5; 
    // int marks[size]; 

    // for(int i=0; i<size; i++) {
    //     cin>>marks[i]; 
    // }

    // for(int i=0; i<size; i++) {
    //     cout<< marks[i], " "; 
    // }

    // 

    //////////////// home work print the index of -15 which is 4 //////////////////


    // find the smallest/largest in array 

    // int nums[] = {5, 15, 22, 1, -15, 24}; 
    // int size = 6; 

    // cout<<sizeof(nums) / sizeof(nums[0])<< endl; 

    // int smallest = INT_MAX; // ~ infinity -> INT_MAX

    // for(int i=0; i<size; i++) {
    //     if(nums[i] < smallest) {
    //         smallest = nums[i];
    //     }
    // }

    // cout<<"smallest = "<< smallest<< endl; // -15

    // find the largest

    // int nums[] = {5, 15, 22, 1, -15, 24}; 
    // int size = 6; 

    // int largest = INT_MIN;

    // for(int i=0; i<size; i++){
    //     if(nums[i] > largest) {
    //         largest = nums[i]; 
    //     }
    // }
    // cout<<"largest = "<<largest<<endl; // 24


    // 






    return 0; 

}