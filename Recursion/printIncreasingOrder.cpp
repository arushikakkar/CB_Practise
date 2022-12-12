#include<iostream>
using namespace std;

void f(int n){
    //base case
    if(n==0){
        return; //mandatory in base case recursion
    }

    //recursive case
    cout<<n<<" "; //decreasing order

    f(n-1);
    // cout<<n<<" "; //increasing order
}

int main(){
    int n =20;

    f(n);
    return 0;
}