#include<iostream>
using namespace std;

int main(){
    int n =5;
    int x; // 2 4 0 8 6
    int lsf;
    int i =2;
    cin>>lsf;
    while(i<=n){
        cin>>x;
        if(x>lsf){
            lsf = x;
        }
        i++;
    }
    cout<<lsf;
    return 0;
}