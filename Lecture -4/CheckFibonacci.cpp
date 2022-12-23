// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    if(n == 0 or n==1){
        cout<<"true"<<endl;
    }
    else{
    int a =0;
    int b =1;
    
    while(true){
        int c = a + b;
        if(c == n){
            cout<<"true";
            break;
        }
        if(c>n){
            cout<<"false";
            break;
        }
        a = b;
        b = c;
        // cout<<b<<endl; series print
    }
    // cout<<b<<endl;
}
    return 0;
}