#include <iostream>
#include <vector>
using namespace std;
//pass by reference using pointers
int changeA(int *ptr){
    *ptr= 20;
    return *ptr;
}

int main(){
    int a=26;
    changeA(&a);
    cout << a;
    return 0;}

//pass by reference using alias
int changeA(int &b){ //& this is here sign of alias,b is the nickname of a
    b= 20;
    return b;
}

int main(){
    int a=26;
    changeA(a);
    cout << a;
    return 0;}