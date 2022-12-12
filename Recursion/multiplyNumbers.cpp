#include<iostream>
using namespace std;

int pro(int x, int y){

    //base case
    if(y==0){
        return 0;
    }

    //recursive case
    // int A = pro(x, y-1);

    return x+pro(x,y-1);
}

int main(){
    int x =4;
    int y =3;

    cout<<pro(x,y);

    return 0;
}