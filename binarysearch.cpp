#include <iostream>
#include<vector>
using namespace std;
//iterative approach
int binarysearch(vector <int>& nums,int target){
    int start =0;
    int end=nums.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(target>nums[mid]){
            start=mid+1;
        }
        if(target<nums[mid]){
            end=mid-1;
        }
        if(target==nums[mid]){
            return mid;
        }
    }
    return -1;
}

int main(){
    vector <int> nums={-1,0,3,4,5,9,12};
    int target=12;
    int answer =binarysearch(nums,target);
    cout << answer;
    return 0;
}