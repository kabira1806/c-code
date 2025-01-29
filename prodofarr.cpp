#include <iostream>
#include <vector>
using namespace std;
//brute force approach
/*iss code mein yeh ho rha hai ki outer loop se voh pehle index pe jayega aur fir inner loop run krega aur ans dega aur fir yeh vaaps outer loop
mein jaakr ek value fix krega..aur fir yeh aisa chalta rhega*/
vector <int> prod_of_arr(vector <int> nums){
    int n=nums.size();
    vector <int> ans(n,1);//it means a vector whose size is 5 and all the elements are 1
    for (int i=0;i<n;i++){
        int j=0;
        int product = 1;
        while(j<n){
            if(j!=i){
            product=product*nums[j];
            }
        j++;}
    ans[i]=product;
    }
return ans;}

int main(){
    vector <int> nums={1,2,3,4};
    vector <int> numsr = prod_of_arr(nums);
    for (int num : numsr) {
        cout << num << " ";
    }
    return 0;
}

