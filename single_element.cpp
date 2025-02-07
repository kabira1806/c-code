#include <iostream>
#include <vector>
using namespace std;
//single element in sorted array
int single_element(vector <int>& nums){
    int start =0;
    int end=nums.size()-1;
    if(end==1){
        return nums[0];
    }
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]){
            return mid;
        }
        if(mid%2==0){//even
            if(nums[mid]==nums[mid-1]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(nums[mid]==nums[mid-1]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector <int> nums={1,1,2,3,3,4,4,8,8};
    cout << single_element(nums);
    return 0;
}