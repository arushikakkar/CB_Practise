#include<iostream>
#include<string.h>
using namespace std;
class customer{
    public:
    char name[100];
    int age;
    char gender;
    double credits;
    customer(){
        cout<<"I am inside the default constructor of customer class"<<endl;
    }

    customer(char* n, int a, char g, double c){
        cout<<"I am inside the parameterized constructor of the customer class"<<endl;
        strcpy(name, n);
        age = a;
        gender = g;
        credits = c;
    }
    void printCustomerInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
        cout<<credits<<endl;
    }
};

int main(){
    customer c("naruto", 32, 'M', 5000);
    c.printCustomerInfo();
    customer c1;
    return 0;
}