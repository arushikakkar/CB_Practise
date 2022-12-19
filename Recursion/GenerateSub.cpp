#include<iostream>
//constraints 1<n<10
using namespace std;
void f(char* inp, char* out, int i, int j){
    //base case
if(inp[i] == '\0'){ //or i ==n
    out[j] = '\0';
    cout<<out<<endl;
    return;
}

//recursive case
out[j] = inp[i];
f(inp, out, i+1, j+1);
f(inp, out, i+1, j);
}

int main(){
    char inp[] = "abc";
    char out[10];

    f(inp, out, 0, 0); 
    return 0;
}