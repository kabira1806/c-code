#include <iostream>
#include <algorithm>
using namespace std;
//reverse the string
//step 1- reverse complete string
//step 2- ab har word ko individually seperate kro
//step 3- ab har individual word ko reverse kro
string revere(string s){
    int n = s.length();
    string ans="";
    reverse(s.begin(),s.end());
    for(int i = 0;i<n;i++){
        string word="";
        while(i <n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans+=" "+word;
        }
    }
    return ans.substr(1);
}

int main(){
    string s = "the pen";
    revere(s);
    cout << revere(s);
    return 0;
}