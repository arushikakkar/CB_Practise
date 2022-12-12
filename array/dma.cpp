#include<iostream>
using namespace std;

int *f(){
    int* ptr = new int;
    return ptr;
}
int main(){
    int * xptr =f();
    return 0;
}