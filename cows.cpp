#include <iostream>
#include <vector>
#include <algorithm> //for getting sorting feature
using namespace std;
//aggressive cows
bool ispossible(vector <int> arr,int n,int m,int mindistance){
    int cows=1;
    int laststallpos=arr[0];
    for(int i =1;i<n;i++){
        if(arr[i]-laststallpos>=mindistance){
            cows++;
            laststallpos=arr[i];
        }
        if(cows==m){
            return true;
        }
    }
    return false;
}

int cow(vector <int> arr,int n,int m){
    sort(arr.begin(),arr.end());
    int start=1,end=arr[n-1]-arr[0],ans;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        if(ispossible(arr,n,m,mid)){
            ans =mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    vector <int> positions={1,2,8,4,9};
    int n=5,m=3;
    cout << cow(positions,n,m)<< endl;
    return 0;
}