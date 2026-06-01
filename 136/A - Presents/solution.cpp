//A. Presents
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
give gift (pi) -> 2 3 4 1
recieve gift -> 4 1 2 3
pi friend gave gift to i
that means: 
brr[2]=1
brr[3]=2
brr[4]=3
brr[1]=4
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n;
    cin>>n;
    vector<int>arr(n+1);
    vector<int>brr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        brr[arr[i]]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
        
    
    return 0;
}