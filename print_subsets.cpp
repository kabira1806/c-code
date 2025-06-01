#include<bits/stdc++.h>
using namespace std;

//very hard concept in this code !!!
// print all subsets using recursion and backtracking
void print(vector<int>arr,vector <int> ans,int i){
    if(i=arr.size()){
        return ans;
    }
    //inclusion of element
    ans.push_back(arr[i]);
    print(arr,ans,i+1);//recursion
    //exclusion of element
    ans.pop_back();//backtracking
    print(arr,ans,i+1);//backtracking ke liye vaaps recursion krna
    
}