#include<iostream>
#include<cstring>
using namespace std;

void copyString(char*str1, char*str2){

}
int main(){
    char str1[100] = "hello";
    char str2[] ="wow";
    cout<<"before "<<str1<<endl;
    strcpy(str1, str2);
    cout<<"after "<<str1<<endl;
    return 0;
}