// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int x =0; //x - axis
    int y =0; //y - axis
    
    char ch;
    
    while(true){
        ch = cin.get();
        if(ch == '\n'){
            break;
        }
        if(ch =='E'){
            x++;
        }
        else if(ch == 'N'){
            y++;
        }
        else if(ch == 'W'){
            x--;
        }
        else{
            y--;
        }
    }
    cout<<x << "and"<<y;

    return 0;
}