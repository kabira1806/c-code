#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//sort color
//brute force approach using in built sort function
void sortcolor(vector <int>& nums){
    sort(nums.begin(),nums.end());
}
void show(vector <int>& nums){
    for(int value : nums){
        cout << value << " ";
    }
}
// time complexity is O(nlogn) and space complexity is O(1)

int main(){
    vector <int> arr={2,0,2,1,1,0,0,1,2,0};
    int n=5;
    sortcolor(arr);
    show(arr);
    return 0;
}

//optimised approach using count
void sortcolor(vector <int>& arr,int n){
    int c0=0;
    int c1=0;
    int c2=0;
    for(int i = 0;i<n;i++){
        if(arr[i]==0){
            ++c0;
        }
        else if(arr[i]==1){
            ++c1;
        }
        else{
            ++c2;
        }
    }
        
    int idx=0;
    for(int i =0;i<c0;i++){
        arr[idx++]=0;
    }
    for(int i =0;i<c1;i++){
        arr[idx++]=1;
    }
    for(int i = 0;i<c2;i++){
        arr[idx++]=2;
    }
    for (int num : arr) {
    cout << num << " ";
    cout << endl;}
}

int main(){
    vector <int> arr={2,0,2,1,1,0,0,1,2,0};
    int n=10;
    sortcolor(arr,n);
    return 0;
}


