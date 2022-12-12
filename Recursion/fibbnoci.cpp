#include<iostream>
using namespace std;
int f(int n){
    
    //base class
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    //recursive case
    int A = f(n-1);
    int B = f(n-2);

    return A+B;
}

int main(){
    int n =7;
    cout<<f(n)<<endl;
    return 0;
}