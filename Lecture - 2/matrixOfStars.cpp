// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int n =4;
   int i =1;
   while(i<=n){
       int j =1;
       while(j<=n){
           cout<<"*";
           j++;
       }
       i++;
       cout<<endl;
   }

    return 0;
}