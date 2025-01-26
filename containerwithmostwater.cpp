#include<iostream>
#include<vector>
using namespace std;
//brute force approach-humne saare possible containers nikaale(similar way of finding subarrays) aur fir unn sbka area nikaale compare krliya
int maxwater(vector <int> height){
    int maxwater=0;
    int n=height.size();
    for(int i=0;i<n;i++){ //these i and j are index numbers of height
        for(int j=i+1;j<n;j++){
            int width = j-i;
            int length = min(height[i],height[j]); // we are comapring actual values of heights
            int area = length*width;
            maxwater=max(maxwater,area);
        }
    }
    return maxwater;
}

int main(){
    vector <int> height={1,8,6,2,5,4,8,3,7};
    int answer = maxwater(height);
    cout << answer;
    return 0;
}