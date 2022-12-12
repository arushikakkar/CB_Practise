#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    //n=5 & arr 1,3,4,2,5 & T=5
    int n;
    cin>>n;
 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i =0;
    int j =n-1;

    int t;
    cin>>t;
    sort(arr, arr+n);
    while(i<j){
        int sum =arr[i] + arr[j];
        if(sum ==t){
            cout << arr[i] << " and " << arr[j] << endl;
            i++;
            j--;
        }
        else if(sum>t){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}
