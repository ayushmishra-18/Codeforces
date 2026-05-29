//B. Balanced Array
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0;
        if((n/2)%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i=i+2){
                cout<<i<<" ";
                a=a+i;
            }
            for(int i=1;i<n-1;i=i+2){
                cout<<i<< " ";
                a=a-i;
            }
            cout<<a;
            cout<<endl;
        }        
    }
    return 0;
}