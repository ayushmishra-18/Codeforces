//B. Olya and Game with Arrays
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
 
*/
 
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
        int mini=1e9;
        int smini=1e9;
        int ssum=0;
        while(n--){
            int m;
            cin>>m;
            vector<int>arr(m);
            for(int i=0;i<m;i++){
                cin>>arr[i];
            }
            sort(arr.begin(),arr.end());
            int m1=arr[0];
            int m2=arr[1];
            mini=min(mini,m1);
            smini=min(smini,m2);
            ssum+=m2;
            
        }
        cout<<ssum-smini+mini<<endl;
        
    }
    return 0;
}