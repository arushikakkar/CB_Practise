#include<iostream>
using namespace std;
//last occurence
int main(){
    int n;
    cout<<"Enter the value n: ";
    cin>>n;
    int arr[n];
    int i;
    
    for(i =0; i<n; i++){
        cin>>arr[i];
    }
    int t ;
    cout<<"Enter the value of Target: ";
    cin>>t;
    
    for(i =n-1; i>=0; i--){
        if(arr[i]==t){
        cout<<i<<" ";
        break;
    }
    }
    if (i==-1){
        cout<<-1<<endl;
    }
    return 0;
}