#include<iostream>
using namespace std;
//First Occurence Array
int main(){
    int arr[]={10, 20, 30, 10, 20};
    int n = sizeof(arr) / sizeof(int);
    int t =10;
    int i;

    for(i =0; i<n; i++){
        if(arr[i] == t){
            cout<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<-1<<endl;
    }
    return 0;
}