    #include <iostream>
    #include <vector>
    using namespace std;
    //boookallocate problem
    bool isvalid(vector <int> arr,int n,int m,int maxallowedpages){//func to check if mid is valid or not
        int student=1;//pehle ek student ko baatenge saare pages
        int pages=0;
        for(int i=0;i<n;i++){
            if(arr[i]>maxallowedpages){//maxallowedpages=mid value.
                return false;
            }
            if(pages+arr[i]<=maxallowedpages){
                pages+=arr[i];
            }
            else{
                student++;
                pages=arr[i];
            }
        }
        return student>m? false : true;
    }

    int allocatebooks(vector <int> arr,int n,int m){ //n is number of books;m is number of students
        int sum = 0;
        for(int i = 0;i<n;i++){//max value of answer
            sum=sum+arr[i]; //max number of pages one can get
        }
        int ans; 
        int start = 0, end = sum;// range of answer(0 to 10)
        while(start<=end){//binary search
            int mid=start+(end-start)/2;
            if(isvalid(arr,n,m,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }

    int main(){
        vector<int> arr={2,1,3,4};
        int n=4,m=2;
        cout << allocatebooks(arr,n,m);
        return 0;
    }