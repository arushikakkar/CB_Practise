#include<iostream>
using namespace std;
string spellingMap[]={"zero","one", "two", "three"};
void f(int n){
    //base case
    if(n==0){
        return;
    }

    //recursive case
    f(n/10);{
        int d =n%10;
        cout<<spellingMap[d]<<" ";
    }
}

int main(){
    int n =123;

    f(n);
    return 0;
}