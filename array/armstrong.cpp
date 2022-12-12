// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n ;
    cin>>n;
    
    int k = n;
    int p = n;
    int count =0;
    while(k){
        k = k/10;
        count++;
    }
    int sum =0;
    while(p){
        int digit =p%10;
        p = p/10;
        sum = sum + (pow(digit,count));
    }
    if(sum==n){
    cout<<"True";
    }
    else{
        cout<<"false";
    }

    return 0;
}