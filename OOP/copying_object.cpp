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
        cout<<"default constructor"<<endl;
    }

    customer(char* n, int a, char g, double c){
        cout<<"parameterized constructor"<<endl;
        strcpy(name, n);
        age = a;
        gender = g;
        credits =c;
    }

    void printCustomerInfo(){
        cout<<"Customer Info"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Credits: "<<credits<<endl;
    }

};

int main(){
    customer c1("naruto", 32, 'm', 5000);
    customer c2 =c1; //copy constructor
    c2.printCustomerInfo();

    customer c3; //defaut constructor
    c3 = c1; //copy assignment operator
    c3.printCustomerInfo();
    return 0;
}