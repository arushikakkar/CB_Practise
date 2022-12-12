#include <iostream>
using namespace std;
int main() {
    //selection sorting array
     int arr[] = {2,1,3,1,5,2,2};    
        int n = sizeof(arr) / sizeof(int);  
    for(int i=0; i<n-1; i++){        
        int correct_pos =i;        
        int min_idx  = i;        
        for(int j =i+1; j<n; j++){            
            if(arr[j]< arr[min_idx]){               
                 min_idx =j;            
            }                 
            }
            swap(arr[correct_pos], arr[min_idx]);      
    }        
    for(int i=0; i<n; i++){        
        cout<<arr[i]<<" ";
    }

    return 0;
}