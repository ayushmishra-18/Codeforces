//A. City Day
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
d-x ..... d-2 d-1 d d+1 d+2 ..... d+y
bigger          smaller          bigger
 
check left of d till x units and right side by y units 
 
n=10 x=2 y=2
10 9 6 7 8 3 2 1 4 5 -> 3rd element
 
n=10 x=2 y=3
10 9 6 7 8 3 2 1 4 5 -> 8th element
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int a=0;
        for(int j=i-1;j>=i-x && j>=0 && a==0;j--){
            if(arr[j]<=arr[i]){
                a=1;
            }
        }
        if(a==1){
            continue;
        }
        for(int j=i+1;j<n && j<=i+y && a==0;j++){
            if(arr[j]<=arr[i]){
                a=1;
            }
        }
        if(a==0){
            cout<<i+1;
            return 0;
        }
    
    }
    
    return 0;
}