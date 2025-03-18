#include <iostream>
using namespace std;
//selection sort
void sort(int arr[],int n){//outer loop
    for(int i = 0;i<n-1;i++){
        int min_idx=i;// assuming first element of the unsorted array is smallest element
        for(int j = i+1;j<n;j++){ //inner loop
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
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