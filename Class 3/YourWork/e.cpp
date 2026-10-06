#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int>& a, int t){
    int l=0,r=a.size()-1;

    while(l<=r){
        int mid = (r+l)/2;
        if(a[mid]==t)
        return mid;
        else if(a[mid]>t)
        r = mid-1;
        else
        l = mid+1;
        return -1;

    }
}
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int index = binary_search(a,t);
    if(index!=-1)
    cout<<"Found at index "<<index<<endl;
    else
    cout<<"Not Found"<<endl;
}