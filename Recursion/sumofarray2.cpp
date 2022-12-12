#include<iostream>
using namespace std;
int f(int* arr, int i){
    //base case
    if(i==0){
        return arr[0];

    }
    //recursive case
    int A =f(arr, i-1);
    
    return arr[i]+A;
}

int main(){
    int n = 5;
    int arr[n]={10,20,30,40,50};

    cout<<f(arr, n-1)<<endl;

    return 0;
}