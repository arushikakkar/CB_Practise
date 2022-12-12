#include<iostream>
using namespace std;

int main(){
    //address format is hexadecimal format i.e 64/4=16 but it shows only 12or6 Digits in o/p
    //we use address of (&) operator
    //these address depends on system i.e 64Bits

    int x = 10;

    cout<<"x: "<<x<<endl;
    cout<<"Address of x: "<<&x<<endl;
    cout<<"Size of address x: "<<sizeof(&x)<<"B"<<endl;

    cout<<endl;

    //float check

    float y =3.14;
    cout<<"y: "<<y<<endl;
    cout<<"&y: "<<&y<<endl;
    cout<<"size of &y: "<<sizeof(&y)<<"B"<<endl;

    cout<<endl;

    double z = 1.29;
    cout<<"&z: "<<&z<<endl;
    cout<<"size of &z:"<<sizeof(&z)<<"B"<<endl;

    cout<<endl;

    char a = 'Z';
    cout<<"a: "<<a<<endl;
    cout<<"&a: "<<&a<<endl;
    cout<<"size of &a: "<<sizeof(&a)<<endl;

    return 0;
}