// Input a string of even length and reverse the second half of the string.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int len;
    string s;
    cout<<"Enter a string of even len: ";
    getline(cin,s);
    len = s.length();
    reverse(s.begin()+(len/2), s.end());
    cout<<s;
}
