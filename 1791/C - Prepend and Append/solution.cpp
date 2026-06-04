//C. Prepend and Append
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        int l=0,r=n-1;
        while(l<r){
            if(s[l]!=s[r]){
                count=count+2;
                l++;
                r--;
            }
            else{
                break;
            }
        }
        cout<<n-count<<endl;
    }
}