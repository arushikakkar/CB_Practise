#include <iostream>
using namespace std;
int main() {
    int lc = 0; //lowercase
    int uc = 0; //uppercase
    int d = 0; //digits
    int ws = 0; //whitespace
    int ss = 0; //special symbol
    
    char ch;
    while(true){
        
    ch = cin.get();
    if(ch == '$'){
        break;
    }
    if(ch >='A' and ch<= 'Z'){
        uc++;
    }
    else if(ch>='a' and ch<='z'){
        lc++;
    }
    else if(ch >= '0' and ch <= '9'){
        d++;
    }
    else if(ch == ' ' || ch == '\n' || ch == '\t'){
        ws++;
    }
    else{
        ss++;
    }
    }
    cout<<"lower"<<lc<<endl;
    cout<<"upper"<<uc<<endl;
    cout<<"white"<<ws<<endl;
    cout<<"symbol"<<ss<<endl;
    cout<<"digits"<<d<<endl;
        
    return 0;
}