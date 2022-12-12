#include<iostream>

using namespace std;

int main() {

	int arr[] = {-2, 1,-3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr)/sizeof(int);
	
	int csum[101];
	csum[0] =0;
	
	for(int i=1; i<=n; i++){
	    csum[i] = csum[i-1] + arr[i-1];
	}
	for(int i =0; i<=n; i++){
	    cout<<csum[i]<<" ";
	}
	cout<<endl;

	return 0;}