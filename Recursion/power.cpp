#include<iostream>
using namespace std;
//check  edge case

int f(int x, int y){
    //base case
    if(y == 0){
        return 1;
    }

    //recursive case
    int A = f(x, y-1);
    return x*A;

}

int main(){
    int x=2,y=3;
    // cin>>x>>y;

    cout<<f(x,y)<<endl;

    return 0;
}