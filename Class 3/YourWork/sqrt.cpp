#include <bits/stdc++.h>
using namespace std;

long long intSqrt(long long n){
    long long l=0,r=n-1,ans=-1;
    while(l<=r){
        long long mid = (l+r)/2;
        if(mid*mid <= n){
            ans = mid;
            l = mid+1;
        }
        else

        r = mid-1;
        
    }

    return ans;
}
int main(){
    long long n;
    cin>>n;

    cout<<"Integer Square Root of "<<n<<" is: "<<intSqrt(n)<<endl;

}