#include<iostream>
using namespace std;

int main(){
    int n =5;
    int i = 2;

    while(i<=n-1){
        if(n%i != 0){
            cout<<"True";
            break;
        }
        i++;
        cout<<"False";
        break;
    }
    return 0;
}