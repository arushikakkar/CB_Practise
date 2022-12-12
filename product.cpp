//product of array except self
#include <iostream>
using namespace std;
int main() {
    // int arr[] = {1,2,3,4};
    // int n = sizeof(arr)/sizeof(int);
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res[n];
    
    res[0] = 1;
    int i;
    for(i =1; i<=n-1; i++){
        res[i] = res[i-1] * arr[i-1];
    }
    
    int r=1;
    for(i=n-1; i>=0; i--){
        res[i] = res[i] * r;
        r = r*arr[i];
    }
    
    for(i =0; i<n; i++){
        cout<<res[i]<<" ";
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
   
//     int n;
//     cin>>n;
    
//     long arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     long prod=1;
//     for(int i=0; i<n; i++){
//         prod=prod * (arr[i]);
//     }
    
//     long res[n];
//     for(int i =0; i<n; i++){
        
//         res[i] = prod/arr[i];
//     }

//     for(int i =0; i<n; i++){
//         cout<<res[i]<<" ";
//     }

//     return 0;
// }