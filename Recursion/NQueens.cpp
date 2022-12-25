#include<iostream>
//constraints : <at max 10
using namespace std;
int f(int n, int* qpos, int r){
    //base case
    if(r==n){
        for(int i =0; i<n; i++) cout<<qpos[i]<<" ";
        return;
    }
    //recursive case
}

int main(){
    int n =4;
    int qpos[10];

    f(n, qpos, 0);

    return 0;
}