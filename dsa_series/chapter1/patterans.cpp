#include <iostream> 
using namespace std; 

int main() {

    // square Pattern 

    // Esay with number n = 4; 


    // int n = 4; 

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++) {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


    // 

    // int n = 4; 

    // for(int i=0; i<=n; i++) {
    //     char ch = 'A';
    //     for(int j=0; j<=n; j++) {
    //         cout<<ch;
    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }


    // 

    // int n = 3; 
    // int num = 1; 
    
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         cout<<num<<" "; 
    //         num++; 
    //     }
    //     cout<<endl; 
    // }
    
    // int n = 3; 

    // char ch = 'A'; 
    // for(int i = 0; i < n; i++) {

    //     for(int j = 0; j < n; j++){
    //         cout<<ch;
    //         ch+=1;  
    //     }
    //     cout<<endl; 
    // }


    // 


    // Easy with stars n = 4; 

    
    // int n = 4; 

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < i+1; j++ ){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 


    // int n = 4; 

    // for (int i = 0; i < n; i++) {
    //     for(int j = 0; j < i+1; j ++) {
    //         cout<< char('A' + i);
    //     }
    //     cout<<endl;
    // }


    //


    // int n = 4; 
    // int num = 1; 

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         cout<<num<<" "; 
    //         num++; 
    //     }
    //     cout<<endl; 
    // }


    // 

    // int n = 4; 

    // for(int i = 0; i < n; i++) {
    //     for(int j = 1; j <= i+1; j++) {
    //         cout<<j<<" "; 
    //     }
    //     cout<<endl; 
    // }



    // 

    // reverse traingle pattern 

    // int n = 4; 

    // for(int i=0; i<n; i++) {
    //     for(int j=i+1; j>0; j--) {
    //         cout<<j<<" "; 
    //     }
    //     cout<<endl;
    // }




    // 

    // Floyd's triangle pattern 

    // int n = 5; 
    // int num = 1; 

    // for(int i=0; i<n; i++) {
    //     for(int j=1; j<i+1; j++) {
    //         cout<<num<<" "; 
    //         num++;
    //     }
    //     cout<<endl;
    // }


    // 

    // int n = 5;
    // char ch = 'A';

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<i+1; j++) {
    //         cout<<ch<<" "; 
    //         ch = ch + 1; 
    //     }
    //     cout<<endl; 
    // }


    // 

    // Inverted Triangle pattern 

    // int n = 4; 

    // for(int i=0; i<n; i++) {
    //     // spaces remove left side 

    //     for(int j=0; j<i; j++) {
    //         cout<< " ";
    //     }
    //     //nums 

    //     for(int j=0; j<n-i; j++) {
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }


    // 

  

    // int n = 4; 

    // for(int i=0; i<n; i++) {
    //     // space : n-i-1
    //     for(int j=0; j<n-i-1; j++) {
    //         cout<<" ";
    //     }
    //     // num : i+1
    //     for(int j=1; j<=i+1; j++ ){
    //         cout<<j;
    //     }
    //     for(int j=i; j>0; j--) {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // 

    // Hollow Diamond pattern 

    int n = 4; 

    for(int i = 0; i < n; i++) {
        // spaces 
        for(int j = 0; j < n-i-1; j++) {
            cout<<" ";
        }
        cout<<"*";

        if(i != 0) {
            for(int j=0; j <2*i-1; j++) {
                cout<<" "; 
            }
            cout<<"*";
        }
        cout<<endl;
    }
    // bottom 

    for(int i = 0; i < n-1; i++) {
        // spaces 
        for(int j = 0; j < i+1; j++) {
            cout<<" "; 
        }
        cout<<"*";

        if(i != n-1) {
            // spaces 
            for(int j = 0; j < 2*(n-i)-4; j++) {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl; 
    }











    return 0; 
}