    #include<iostream>
    using namespace std;
    int computepower(int x,int n){
        int ans =1;
        int binform=n;
        while(binform>0){
            if(binform%2==1){
            ans=ans*x;}
            x=x*x;
            binform/=2;
        }
        return ans;
    }

    int main(){
        int x = 3;
        int n = 5 ;
        int answer = computepower(x,n);
        cout << answer;
        return 0;
    }