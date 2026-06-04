//B. Permutation Swap
 
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k,res=0;
        for(int i=0;i<n;i++){
            k=abs(arr[i]-i-1);
            res=__gcd(res,k);
        }
        cout<<res<<endl;
    }
}