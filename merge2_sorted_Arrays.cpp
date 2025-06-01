#include <iostream>
#include <vector>
using namespace std;
void merge(vector <int>& arr1,vector <int>& arr2,int m,int n){
    int idx=m+n-1;
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0){
        if(arr2[j]>=arr1[i]){
            arr1[idx]=arr2[j];
            idx--;j--;
        }
        else{
            arr1[idx]=arr1[i];
            idx--;i--;
        }
    }
    while(j>=0){
        arr1[idx]=arr2[j];
        idx--;j--;
    }
    
}

int main(){
    vector <int> arr1={1,2,3,0,0,0};
    vector <int> arr2={2,5,6};
    int m=3;
    int n=3;
    merge(arr1,arr2,m,n);
    for (int i=0;i<m+n;i++){
        cout << arr1[i];
    }
    return 0;
}