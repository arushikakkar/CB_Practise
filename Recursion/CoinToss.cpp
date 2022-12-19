#include<iostream>
using namespace std;
void f(int n, char* out, int i , int j){
    //base case
    if(i==n){
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }

    //Recursive call
    out[j] ='H';
    f(n, out, i+1, j+1);

    out[j] = 'T';
    f(n, out, i+1, j+1);

}

int main(){
    int n =3;
    char out[10];

    f(n, out, 0, 0);
    return 0;
}