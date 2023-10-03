// Input a string of length n and count all the consonants in the given string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    int counter=0, n;
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    n = s.length();
    for(int i =0; i<n; i++){
        if(s[i] == 'u' || s[i] == 'o' || s[i] == 'i' || s[i] == 'e' || s[i] == 'a') continue;
        else counter++;
    }
    cout<<"number of consonants: "<<counter;
    
}