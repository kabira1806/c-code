#include <iostream>
#include <vector>
using namespace std;
//majority element(brute force approach)
int main(){
    vector <int> nums={1,2,2,1,1};
    int n =5;
    for (int value : nums){//outer loop for each value of nums
        int count = 0;
        for(int el: nums){// inner loop to again go through the values of nums
            if(el==value){//outer loop mein ek value fix hogi aur fir inner loop nums ki saari values ko compare krega outer loop ke value ke sath
                count=count+1;
            }
        } 
        if (count>n/2){
            cout << value;
            return 0;
        }
    }
    


}