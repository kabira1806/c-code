#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fun(vector <int>& arr){
    int index=-1;
    int  n =arr.size()-1;
    for(int i = n-1;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }

    for(int i = n;i>index;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }

    sort(arr.begin() + index + 1, arr.end());
}
int main(){
    vector <int> nums={1,3,2};
    int n=nums.size();
    fun(nums);
    for(int num : nums){
        cout << num << " ";
    }
    return 0;
}