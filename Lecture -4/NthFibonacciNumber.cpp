#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    if(n == 0 or n == 1){
        cout<<n<<endl;
    }
    else{
        int a =0; //0th no
        int b =1; //1st no

        for(int i =2; i<=n; i++){
            int c =a+b;
            a =b;
            b = c;
            // cout<<c<<endl; //series print
        }
        cout<<b<<endl;
    }
    return 0;
}