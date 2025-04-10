#include<bits/stdc++.h>
using namespace std;

int compress(vector <int>& str){
    int idx=0;
    int n = str.size();
    for(int i = 0; i<n;){
        char ch = str[i];
        int count = 0;
        while(i<n && str[i]==ch){
            count ++;
            i++;
        }
        if(count==1){
            str[idx]=ch;
            idx++;
        }
        else{
            str[idx]=ch;
            idx++;
            string chars = to_string(count);
            for(auto dig : chars){
                str[idx++]=dig;
            }
        }
    }
    str.resize(idx);
    return idx;
}