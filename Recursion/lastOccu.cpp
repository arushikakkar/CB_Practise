#include<iostream>
using namespace std;
int f(int* x, int t, int i){
    //base case
    if(i== -1){
        return -1;
    }
    //recursive case
    if(x[i]==t){
        return i;
    }
    return f(x, t, i-1); //same as friends ans
    
}

int main(){
    int n = 5;
    int x[n]={10,20,30,20,30};
    int t=20;

    cout<<f(x, t, n-1)<<endl;
    return 0;
}