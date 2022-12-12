#include<iostream>
using namespace std;

int main(){
    int arr[1000];

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int t;
    cout<<"Enter the value of target: ";
    cin>>t;

    bool flag = false;

    for(int i =0; i<n; i++){
        if (arr[i]==t){
            cout<<i<<" ";
            flag =true;
        }
    }
    if(!flag){
        cout<<-1<<endl;
    }
    return 0;
}