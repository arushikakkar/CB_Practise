#include<iostream>
using namespace std;
int f(int* arr, int n, int t, int i){
    //base case
    if(i==n){
        return -1;
    }
    //recursive case
    if(arr[i] == t){
        return i;
    }
    return f(arr, n, t, i+1);
}

int main(){
    int n =5;
    int  arr[n]={10,20,30,20,30};
    int t =30;

    cout<<f(arr, n, t, 0)<<endl;
    
    return 0;
}