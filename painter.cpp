#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector <int> boards, int n, int m,int maxallowedtime){
    int painter=1;
    int board=0;
    for(int i =0;i<n;i++){
        if(board+boards[i]<=maxallowedtime){
            board=board+boards[i];
        }
        else{
            painter++;
            board=boards[i];
        }
    }
    return painter<=m? true : false;
}

int painter(vector <int> boards, int n, int m){
    int maxval= INT_MIN;
    
    int sum = 0;
    for(int i=0;i<n;i++){
        sum=sum+boards[i];
        maxval=max(maxval,boards[i]);
    }
    int start = maxval;
    int end = sum;
    int ans;
    for(int i =0;i<n;i++){
        int mid=start+(end-start)/2;
        if(isvalid(boards,n,m,mid)){
            end=mid-1;
            ans=mid;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    vector <int> boards={40,30,10,20};
    int n=4,m=2;
    cout << painter(boards,n,m);
    return 0;
}