#include <iostream>
using namespace std;

/*int main(){
    char str[]={'a','b','c','\0'}; // '\0' is the null terminator which is used to tell that the array is ended here and it converts the character into strings
    cout << str;
    return 0;
}*/

int main(){
    char str[6];
    //strlen(array name) is used to calculate the length of the array
    //cin.getline(arr,size,delimiter)
    //delimiter is like full stop..delimiter likhne ke baad hum joh bhi likhe voh output mein nhi aayega..mostly '.' yaa '$' are used as delimiter
    cin.getline(str,6);//reads only 5 characters as 1 character is stored for'\0'
    for(char ch : str){
        cout << ch << " ";
    }
    return 0;
}//strings and character array are different thing. strings are dynamic in nature and they are modifyable 
//strings can be concatenated, and can be compared
//string.length() is used to calculate length
//getlline(cin, stringname,delimiter) is used in strings
// in char arr we use loopof 2 pointer approach to reverse the string
// in string we use reverse function- reverse(str.begin(),str.end()) for reversing the string