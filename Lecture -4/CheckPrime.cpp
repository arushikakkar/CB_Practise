#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    int i =2;

    while(i<=n-1){
        if(n%i ==0){
            cout<<"not prime"<<endl;
            break;
        }
        i++;
    }
    if(i==n){
        cout<<"prime"<<endl;
    }
    return 0;
}