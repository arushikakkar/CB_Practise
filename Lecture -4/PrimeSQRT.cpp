// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n ;
    cin>>n;
    
    int i =2;
    double sq = sqrt(n);
    while(i<=sq){
        if(n%i == 0){
            cout<<"not prime"<<endl;
            break;
        }
        i++;
    }
    if(i>sq){
    cout<<"prime"<<endl;
    }

    return 0;
}