#include <iostream>
using namespace std;
//access the value of the variable whose address is stored by the pointer variable, * operartor is used
int main() {
    int x = 516;
    int *xptr = &x;
    
    cout<<"x= "<<x<<endl;
    cout<<"sizeof(x): "<<sizeof(x)<<endl;
    cout<<"xptr: "<<xptr<<endl;
    cout<<"size of (xptr): "<<sizeof(xptr)<<endl;
    cout<<"*xptr: "<<*xptr<<endl;
    
    char *chptr = (char*)&x;
    cout<<"chptr: "<<(int)*chptr<<endl; //op: 4 i.e it reads last 4 byte

    

    return 0;
}