// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
//bubble sorting
        int arr[] = {50, 40, 30, 20, 10};    
        int n = sizeof(arr) / sizeof(int);        
        for(int i =1; i<=n; i++){       
            for(int j=0; j<n-i ;j++){           
                if (arr[j]> arr[j+1]){               
                    swap (arr[j] , arr[j+1]);           
                    }        
            }   
            }    
            for(int i=0; i<n; i++){        
                cout<<arr[i]<<" ";
}
    return 0;
}