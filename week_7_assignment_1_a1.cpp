// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int len = s.length();
    for(int i =0; i<len; i++){
        if(i%2 !=0) s[i] = '#';
    }
    cout<<s<<endl;
}
