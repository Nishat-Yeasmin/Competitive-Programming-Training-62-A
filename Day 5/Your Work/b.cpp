#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;

    int i = 0;
    int j = s.length()-1;
    bool is_palindrome = false;

    while(i<j){
        if(s[i]!=s[j]){
            is_palindrome = false;
            break;
        }

        else{
            i++;
            j--;
        }
    }

    if(!is_palindrome)
    cout<<"The string is a palindrome."<<endl;
    else
    cout<<"The string is not a palindrome"<<endl;
}
