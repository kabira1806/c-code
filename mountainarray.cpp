#include <iostream>
#include <vector>
using namespace std;
//peak index of mountain array
int mountain(vector <int> &nums){
    int start =1;
    int end = nums.size()-2;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){//if mid is only peak value
            return mid;
        }
        else if(nums[mid-1]<nums[mid]){//if mid is on left half,then search space is right part
            start=mid+1;
        }
        else{//if mid is on right half,then search space is left part
            end=mid- 1;
        }
    }
    return -1;
}

int main(){
    vector <int> nums ={0,3,8,9,5,2};
    cout << mountain(nums);//it will return the peak index
    return 0;
}