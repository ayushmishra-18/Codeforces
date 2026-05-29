//B. Emotes
 
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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=0;
    sort(arr.begin(),arr.end());
    int ma=arr[n-1];
    int sm=arr[n-2];
    
        int grp=m/(k+1);
        int remaining=m%(k+1);
 
        int macount=grp*k+remaining;
        int smcount=m-macount;
        cout<<(macount*ma)+(smcount*sm)<<endl;
        
    
    return 0;
}