#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n =5;
    int x;
    int lsf = INT_MIN;
    int i =0;
    while(i<n){
        cin>>x;
        if(x>lsf){
            lsf = x;
        }
        i++;
    }
    cout<<lsf;
    return 0;
}