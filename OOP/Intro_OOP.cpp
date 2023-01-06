#include<iostream>
#include<string.h>
using namespace std;

class customer{
    public: //access specifier
    char name[100];
    int age;
    char gender;
    double credits;

    customer(){
        cout<<"I m a inside the Default Constructor"<<endl;
    }
    void printCustomerInfo(){
    cout<<"\nCustomer Information\n"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Credits: "<<credits<<endl;
    }


};
// void printCustomerInfo(customer c){
//     cout<<"\nCustomer Information\n"<<endl;
//     cout<<"Name: "<<c.name<<endl;
//     cout<<"Age: "<<c.age<<endl;
//     cout<<"Gender: "<<c.gender<<endl;
//     cout<<"Credits: "<<c.credits<<endl;
//     }


int main(){
    customer c1; //object declaration
    c1.age = 19;
    c1.gender = 'm';
    c1.credits = 500;
    strcpy(c1.name, "P");

    // printCustomerInfo(c1);
    c1.printCustomerInfo();

    // cout<<"\nCustomer Information\n"<<endl;
    // cout<<"Name: "<<c1.name<<endl;
    // cout<<"Age: "<<c1.age<<endl;
    // cout<<"Gender: "<<c1.gender<<endl;
    // cout<<"Credits: "<<c1.credits<<endl;

    customer c2; //object declaration

    c2.age = 23;
    c2.gender = 'f';
    c2.credits = 5600;
    strcpy(c2.name, "A");

    // printCustomerInfo(c2);
    c2.printCustomerInfo();

    // cout<<"\nCustomer Information\n"<<endl;
    // cout<<"Name: "<<c2.name<<endl;
    // cout<<"Age: "<<c2.age<<endl;
    // cout<<"Gender: "<<c2.gender<<endl;
    // cout<<"Credits: "<<c2.credits<<endl;

    return 0;
}