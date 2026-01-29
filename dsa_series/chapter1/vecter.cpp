#include <iostream> 
#include <vector> 
using namespace std; 

int main() {

    //  vector

    // vector<int> vec = {1, 2, 3}; // 
    // cout<< vec[0] << endl;  //  

    // 

    // vector<char> vec = {'a', 'b', 'c'};

    // for(char val : vec) {
    //     cout<< val << endl; 
    // }

    // 


    // Vertor function 
    // size 

    // vector<int> vec = {1, 2, 3, 4, 5};
    // cout<<vec.size()<< endl; 


    // pushback 

    // vector<int> vec; 

    // cout<< "size = " << vec.size() <<endl; 
    // vec.push_back(22); 
    // vec.push_back(23); 
    // vec.push_back(244); 
    // cout<<"after pus back size: " << vec.size() <<endl; 

    // vec.pop_back(); // remove last value Automatically 

    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // cout<<vec.at(1)<<endl;
    
    // for(int val : vec) { // for each loop 

    //     cout<< val << endl; 
    // }


    // 

    vector<int>vec; 

    vec.push_back(0); 
    vec.push_back(1); 
    vec.push_back(2); 

    cout<< vec.size() << endl; // 3 
    cout<< vec.capacity() << endl; // 4 capacity x2 



 

    return 0;   



}