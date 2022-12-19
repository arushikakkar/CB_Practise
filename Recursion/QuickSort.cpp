#include<iostream>
//O(nlogn) :TC
using namespace std;
int partition(int* arr, int s, int e){
    int j = s;
    int i =s-1;
    int pivot = arr[e];
    while(j<e){
        if(arr[j]< pivot){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    swap(arr[i+1], arr[e]);
    return i+1;
}
void quicksort(int* arr, int s, int e){
    if(s >= e){
        return;

    }
    int p = partition(arr, s, e);

    //quick sort left partion
    quicksort(arr, s, p-1);

    //left partition
    quicksort(arr, p-1, e);
}

int main(){
    int arr[] = {60, 50, 20, 10};
    int n = sizeof(arr)/sizeof(int);

    partition(arr, );
    quicksort(arr, 0, n-1);

    return 0;
}