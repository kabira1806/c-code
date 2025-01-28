#include <iostream>
#include <vector>
using namespace std;
//optimal approach
int maxwater(vector <int> height){
    int maxwater =0;
    int lp =0;
    int rp=height.size()-1;
    while(lp<rp){
        int w=rp-lp;
        int ht = min(height[lp],height[rp]);
        int currwater= w*ht;
        maxwater=max(maxwater,currwater);
        height[lp]<height[rp]? lp++ :rp--; //ternary statement it means ki if height[lp]<height[rp] then do any of one operation
    }
    return maxwater;
}

int main(){
    vector <int> height={1,8,6,2,5,4,8,3,7};
    int answer = maxwater(height);
    cout << answer;
    return 0;
}