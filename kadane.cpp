#include<iostream>
#include <vector>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int n = 7;
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum=currsum+arr[i];
        maxsum=max(currsum,maxsum);
        if (currsum<0){
            currsum=0;
        }
    }
    cout << maxsum;
    return 0;
}