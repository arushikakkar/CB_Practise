#include<iostream>
using namespace std;
string f(string str){
    //base case
    //if string is empty
    if(str == ""){
        return str;
    }

    //recursive case
    //char temp = str[0];
    string temp(1,str[0]);

    string subString = str.substr(1);   
    string subStringfromfriend = f(subString);

    if(temp =="x"){
        return subStringfromfriend +temp;
    }else{
        return temp +subStringfromfriend;
    }
}

int main(){
    string str = "xaaaxbxc";
    cout<<f(str)<<endl;
    return 0;
}