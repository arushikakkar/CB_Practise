// for Decimal..........
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n ;
    cin>>n;
    double sq =0; //float or double
    
    while(sq*sq <= n){
        sq = sq+1;
    }
    sq -= 1;
    while(sq*sq<=n){ //for 1st precision place
        sq = sq +0.1;
    }
    sq -= 0.1;
    
    while(sq*sq<=n){ //for two percison place
        sq = sq +0.01;
    }
    sq -= 0.01;
    
    cout<<sq;

    return 0;
}