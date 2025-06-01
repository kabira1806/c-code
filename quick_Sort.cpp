#include <bits/stdc++.h>
using namespace std;

int partition(vector <int> arr,int st,int end){
    int idx= st-1;
    int piv = arr[end];
    for(int j= st;st<end;j++){// this loop is to put all the smaller numbers in left half
        if(arr[j]<=piv){
            idx++;
            swap(arr[j],piv);
        }
    }
    //now we want to put our pivot at correct position so
    idx++;
    swap(piv,arr[idx]);
    
    return idx;
}

void quick(vector <int> arr,int st,int end){
    if(st<end){
        int piv=partition(arr,st,end);
        quick(arr,st,piv-1); // for left half- jisme saare smaller elements aayenge
        quick(arr,piv+1,end); //for right half- jisme saare greater elements aayenge
    }
}