//D. Friends and the Restaurant
 
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
        vector<int>x(n),y(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            arr[i]=y[i]-x[i];
        }
        sort(arr.begin(),arr.end());
        int count=0;
        // for(int i=0;i<n/2;i++){
        //     if(arr[i]+arr[n-1-i]>=0){
        //         count++;
        //     }
        // }
        int i=0,j=n-1;
        while(i<j){
            if(arr[i]+arr[j]>=0){
                count++,i++,j--;
            }
            else{
                i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}