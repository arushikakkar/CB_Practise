#include<iostream>
using namespace std;
void f(int n, char src, char helper, char dest){
    //base case
    if(n ==0){
        return;
    }
    //recursive case
    f(n-1, src, dest, helper);

    cout<<"Move from "<<src<<" to "<<dest<<endl;

    f(n-1, helper, src,dest);

}

int main(){
    int n =3;
    f(n, 'A', 'B', 'C');
    return 0;
}