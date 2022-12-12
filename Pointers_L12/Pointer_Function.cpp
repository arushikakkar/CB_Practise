// #include<iostream>

// using namespace std;

// int main() {
  
//   int a = 10;

//   cout << "inside main(), before increment() a = " << a << endl;

//   // todo ...


//   cout << "inside main(), after  increment() a = " << a << endl;
  
//   return 0;
// }

#include<iostream>

using namespace std;
void increment (int*ptr){
    (*ptr)++;
}
int main() {
  
  int a = 0;
  increment(&a);
  cout<<a<<endl;

  
  return 0;
}