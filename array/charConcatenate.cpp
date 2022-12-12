#include<iostream>
#include<cstring>
using namespace std;
int stringConcat(){


}
int main(){
    char str1[]= "hello";
    char str2[] = "world";

    cout<<"before "<<str1<<endl;
    strcat(str1, str2);
    cout<<"after "<<str2<<endl;
    return 0;
}