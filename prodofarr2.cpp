#include <iostream>
#include<vector>
using namespace std;
//optimal approach
vector <int> prodofarr(vector <int> nums){
    int n=nums.size();
    vector <int> ans(n,1);
    vector <int> prefix(n,1);
    vector <int> suffix(n,1);
    prefix[0]=1;
    for(int i =1;i<n;i++){ //pehle prefix calculate ho rha hai
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    suffix[n-1]=1;//suffix calculate ho rha hai
    for(int j=n-2;j>=0;j--){
        suffix[j]=suffix[j+1]*nums[j+1];
    }
    for(int k=0;k<n;k++){
        ans[k]=prefix[k]*suffix[k];
    }
    return ans;
}

int main(){
    vector <int> nums={1,2,3,4};
    vector <int> ans = prodofarr(nums);
    for(int value : ans){
        cout << value << " ";
    }
    return 0;
}