#include<iostream>
using namespace std;
//bubble sort
void sort(int arr[],int n){ //outer loop-it is used to iterate the largest element at last
    for(int i =0;i<=n-1;i++){
        bool isswap= false; //assuming that swapping is not happened
        // inner loop- it is the process to change the position of largest element
        for(int j =0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }
        if(isswap= false){  
            return;
        }
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