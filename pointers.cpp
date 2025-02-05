#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a =10;
    cout << &a << endl; //address of a is printed
    int*ptr=&a;//iss pointer mein address of a is stored
    cout << ptr << endl; //value of ptr is printed
    int**ptr2=&ptr;//yeh ptr2, ptr ka address store kr rha hai
    cout << ptr2 << endl; //value of ptr2 is printed
    cout << &ptr << endl;
    //dereference operator-value at address is printed
    cout << *(&a) << endl;//a ka joh address hai uspe joh value stored hogi vahi print hogi
    cout << *(ptr) << endl;//ptr ki joh value voh krke *ptr krenge toh uspe joh value hai voh print hojayegi
    return 0;
}