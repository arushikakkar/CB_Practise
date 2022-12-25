#include<iostream>
using namespace std;
int countNumber(int n, int k, int i, string out){
    //base case
    if(i==n){
        return 1;
    }
    //recursive case
    int count =0;
    for(int j =1; j<=k; j++){
        if(i+j <= n){
            //take a jump of size j to reach i+j
        count += countNumber(n, k, i+j, out);
        }else{
            break;
        }
    }
    return count;

}

int main(){
    int n =4;
    int k =3;
    string out;
    cout<<countNumber(n, k, 0, out)<<endl;
    
    return 0;
}