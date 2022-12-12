// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//insertion sort
int main() {
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    int arr[] ={50, 40, 10, 30, 20};
    int n = sizeof(arr)/sizeof(int);
    
    for(int i =1; i<=n-1; i++){
        int key = arr[i];
        //sorted part
        int j= i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}