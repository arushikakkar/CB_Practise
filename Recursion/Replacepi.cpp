#include<iostream>
using namespace std;

void replacePi(char* inp, int i){
    //base case
    if(inp[i] =='\0'){
        return; //you have alrdy replace all pi to 3.14
    }
    int j =i+2;
    while(inp[j] != '\0'){
        j++;
    }
    while(j>=i+2){
        inp[j+2] = inp[j];
        j--;
    }
    //recursive case
    if(inp[i] == 'p' and inp[i+1] == 'i'){
        inp[i] = '3';
        inp[i+1] = '.';
        inp[i+2] = '1';
        inp[i+3] = '4';

        replacePi(inp, i+1);
    
    }else{

    }
}

int main(){
    char inp[20] = "pip";

    replacePi(inp, 0);
    cout<<inp<<endl;
    return 0;
}