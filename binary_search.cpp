#include <bits/stdc++.h>
using namespace std;

int bs(vector <int>arr, int tar,int start,int end){
    if(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==tar) return mid;
        else if(arr[mid]>=tar){
            return bs(arr,tar,mid+1,end);
        }
        else{
            return bs(arr,tar,start,mid-1);
        }
    }
    return -1;
}

int search( vector <int>&arr, int target){
    return int bs(arr,target,0,arr.size()-1);
}