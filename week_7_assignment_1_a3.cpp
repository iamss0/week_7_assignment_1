// Check whether the given string is palindrome or not.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int len = s.length();
    bool check = true;
    for(int i =0, j=len-1; i<=j; i++,j--){
        if(s[i]!=s[j]) {
            check = false;
            break;
        }
    }
    if (check) cout<<"Yes ";
    else cout<<"No";
}