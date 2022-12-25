#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int p; 
    cin>>p;

    double sq = 0; //to store the square root of n
    int i =0;
    double inc = 1;

    while(i<=p){
        while(sq*sq<=n){
            sq = sq +inc;
        }
        sq = sq -inc;
        inc = inc/10;
        i++;
    }
    cout<<sq<<endl;

    return 0;
}