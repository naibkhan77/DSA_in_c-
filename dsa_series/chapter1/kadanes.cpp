#include <iostream> 
#include <vector> 
using namespace std; 

vector<int> pairSum(vector<int> nums, int target) {
    vector<int>ans;
    int n = nums.size(); 

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == target) {
                ans.push_back(i); 
                ans.push_back(j); 
                return ans; 
            }
        }
    }
    return ans; 
}

int main() {

     // Pair sum //////////////

     vector<int> nums = {2, 7, 11, 15}; 
     int target = 9; 
     
     vector<int> ans = pairSum(nums, target);
     cout<<ans[0] << ", "<<ans[1] <<endl;  // output 0, 1



    //  /////
    
    // basic of subarray concept 

    // int n = 5;
    // int arr[5] = {1, 2, 3, 4, 5}; 

    // for(int st=0; st<n; st++) {
    //     for(int end=st; end<n; end++) {
    //         for(int i=st; i<=end; i++) {
    //             cout<<arr[i]; 
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    //  

    // simple for loop index value 

    // int arr[5] = {1, 2, 3, 4, 5}; 

    // for(int i = 0; i<5; i++) {
    //     cout<<" index = " << i << " value = " << arr[i]<<endl;  
    // }

    // 


    // int arr[5] = {1, 2, 3, 4, 5}; 
    // int st = 1; 

    // for(int end=st; end<5; end++) {
    //     cout<<" st = " <<st << " end = " << end
    //     << " value = "<< arr[end] << endl;
    // }

    // 

    // maximum subarray sum 

    // {3, -4, 5, 4, -1, 7, -8} 


    // 

   return 0; 
}