//A. Arrival of the General
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
Simple
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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=*max_element(arr.begin(),arr.end());
    int mini=*min_element(arr.begin(),arr.end());
    int a,b;
    for(int i=0;i<n;i++){
        if(arr[i]==mini){
            b=i;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==maxi){
            a=i;
            break;
        }
    }
    if(a<b){
        cout<<a+n-1-b<<endl;
    }
    else{
        cout<<a+n-1-b-1<<endl;
    }
        
    
    return 0;
}