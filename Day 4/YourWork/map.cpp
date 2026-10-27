#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

   map<string, int> freq;

    for(int i=0;i<n;i++){
        string word;
        cin>>word;
        freq[word]++;
    }
    cout<<"word frequencies: "<<endl;

    for(auto x:freq){
        cout<<x.first<<":"<<x.second<<endl;
    }

    string q;
    cin>>q;
    cout<<"Frequency of "<<q<<" is: "<<freq[q]<<endl;
}
