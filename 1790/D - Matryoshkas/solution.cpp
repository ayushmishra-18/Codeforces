//D. Matryoshkas
 
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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int count=0;
        int i=0,j=1;
        while(j<n){
            if(arr[i]+1==arr[j]){
                count++;
                i++,j++;
            }
            else if(arr[i]==arr[j]){
                j++;
            }
            else{
                i++;
                if(i==j){
                    j++;
                }
            }
        }
        cout<<n-count<<endl;
    }
    return 0;
}