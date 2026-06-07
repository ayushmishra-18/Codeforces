//A. Expression
 
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
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    int a=(arr[0]+arr[1])*arr[2];
    int b=arr[0]*arr[1]*arr[2];
    int c=arr[0]*(arr[1]+arr[2]);
    int d=arr[0]+arr[1]*arr[2];
    int e=arr[0]+arr[1]+arr[2];
    int f=arr[0]*arr[1]+arr[2];
    cout<<max({a,b,c,d,e,f})<<endl;
    
 
 
    return 0;
}