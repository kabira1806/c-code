#include <iostream>
#include <algorithm>
using namespace std;
//sort color
void sortcolor(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    for(int i=0;mid<=high;i++){
        if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
        else if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else{
            mid++;
        }
    }
}

int main(){
    int arr[]={2,0,2,1,1,0};
    int n = 6;
    sortcolor(arr,n);
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}