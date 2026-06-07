//A. Construct an Array
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
every element must be <= 2n
number and sum should not match -> array of odd number , bcoz no of odd no is even
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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            arr[i]=(2*i+1);
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}