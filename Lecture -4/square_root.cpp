#include<iostream>
using namespace std;
//For perfect square - coding block
int main(){
    int n;
    cout<<"Enter the non negative nos: ";
    cin>>n;
    int sq =0; //to store the square root of n;
    while(sq * sq <= n){
        sq =sq+1;
    }
    sq =sq -1;
    cout<<"square root is "<<sq<<endl;
    return 0;
}