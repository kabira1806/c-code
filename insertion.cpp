#include <iostream>
using namespace std;
//insertion sort
void sort(int arr[],int n){
    for(int i =1;i<n;i++){//outer loop- used to select the current element
        int curr_el=arr[i];
        int prev=i-1;
        while(arr[prev]>curr_el && prev>=0){//inner loop- used to move the current element at its right position
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr_el; //placing current element at correct position
    }
}


void show(int arr[],int n){
    for(int i =0;i<n;i++){
        cout << arr[i];
    }
}

int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    sort(arr,n);
    show(arr,n);
    return 0;
}