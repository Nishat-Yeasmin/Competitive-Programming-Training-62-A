#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, t;
    cin>>n>>t;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    bool found = false;
    int i = 0;
    int j = n-1;

    while(i<j){
       long long sum = a[i]+a[j];

        if(sum<t){
            i++;
        }
        else if(sum>t){
            j--;
        }
        else{
            cout<<"Pair found: "<<a[i]<<" and "<<a[j]<<endl;
            found = true;
            break;
        }
    }

    if(!found)
    cout<<"No pair exists that sums to "<<t<<endl;
}