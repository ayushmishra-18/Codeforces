//D. Divisible Pairs
 
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
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>arr(n);
        vector<pair<int,int>>k(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            k[i].first=arr[i]%y;
            k[i].second=arr[i]%x;
        }
        sort(k.begin(),k.end());
        int ans=0;
        for(int i=0;i<n;i++){
            int a=arr[i]%x;
            int b=arr[i]%y;
            int cx=(x-a)%x;
            pair<int,int> target={b,cx};
            int start=lower_bound(k.begin(),k.end(),target)-k.begin();
            int end=upper_bound(k.begin(),k.end(),target)-k.begin();
            int count=end-start;
            if(a==cx){
                count--;
            }
            ans=ans+count;
        }
        cout<<ans/2<<endl;
    }
    return 0;
}