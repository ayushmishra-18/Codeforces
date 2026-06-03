//A. New Year Transportation
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
i -> i + a[i]
1 <= a[i] < n-1
 
n=8 t=4
i -> 1 2 3 4 5 6 7 8
a[i] -> 1 2 1 2 1 2 1
max-range 7 6 5 4 3 2 1
initial=1 -> 1+1=2
initial=2 -> 2+2=4
4==t -> YES   1-2-4
 
n=8 t=5
a[i] -> 1 2 1 2 1 1 1
initial=1 -> 1+1=2
initial=2 -> 2+2=4
initial=4 -> 4+2=6
6!=t -> NO   1 2 4 6 7 8
 
 
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n,t;
    cin>>n>>t;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int initial=1;
    while(initial<t){
        initial=initial+arr[initial-1];
    }
    if(initial==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
 
    return 0;
}