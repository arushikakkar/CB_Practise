#include<iostream>
using namespace std;
int f(int* arr, int n, int i){
    //base case
    // if(i == n-1){
    //     return arr[n-1];
    // }
    if(i==n){
        return 0;
    }
    //recursive case
    int A =f(arr, n, i+1);
    
    return arr[i]+A;
}

int main(){
    int n = 5;
    int arr[n]={10,20,30,40,50};

    cout<<f(arr, n, 0)<<endl;


    return 0;
}