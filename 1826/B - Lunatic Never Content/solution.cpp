#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=0;
        for(int i=0;i<n;i++){
            int b=abs(arr[i]-arr[n-i-1]);
            a=__gcd(a,b);
        }
        cout<<a<<endl;
    }
}