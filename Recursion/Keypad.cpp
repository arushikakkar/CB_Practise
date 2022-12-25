#include<iostream>
using namespace std;
string keypad[]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqr", "xyz"};
void generate(char* inp, char* out, int i, int j){
//base case
if(inp[i]=='\0'){
    out[j] = '\0';
    cout<<out<<endl;
    return;
}
//recursive case
int d =inp[i] - '0'; //digit
string option = keypad[d];
for(char c_k : option)
out[j] = c_k;
generate(inp, out, i+1, j+1);
}

int main(){

    char inp[20]="23";
    char out[20];

    generate(inp, out, 0 , 0);
    return 0;
}