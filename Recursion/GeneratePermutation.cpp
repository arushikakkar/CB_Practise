#include<iostream>
#include<cstring>
using namespace std;
 void f(char* inp, int n, int i){
    //base case
    if(i==n){
        cout<<inp<<endl;
        return;
    }

    //recursive case
    for(int j=i; j<=n-1; j++){
        swap(inp[i], inp[j]);
        f(inp, n ,i+1);
        swap(inp[i], inp[j]); //back-tracking
    }
    return;

 }

int main(){
    char inp[]="abc";
    int n = strlen(inp);

    f(inp, n, 0);
    return 0;
}