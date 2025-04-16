#include <bits/stdc++.h>
using namespace std;
int maxsum(vector <vector<int>>& vec){
    int row=vec.size();
    //int column= vec[0].size //vector ke oth element ka joh size hai
    //int maxcount=INT_MIN;
    int sum=0; 
    for(int i = 0;i<row;i++){
        //int sum=0;
        //for(int j=0;j<vec[i].size();j++){
            sum+=vec[i][i];
        //}
        //maxcount=max(maxcount,sum);
    }
    return sum;
    //return maxcount;
}

int main(){
    vector <vector<int>> vec={{1,2,3},{4,5,6},{7,8,9}};
    cout << maxsum(vec);
    return 0;}



    //yeh diagnol sum ka code hai
    //isme joh commented hai voh maxsum ka code...