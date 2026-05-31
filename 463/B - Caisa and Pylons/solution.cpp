//B. Caisa and Pylons
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
_ 3 4 3 2 4
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
    int cost=arr[0];
    int energy=0;
    for(int i=0;i<n-1;i++){
        if((arr[i]<arr[i+1]) && (energy>=arr[i+1]-arr[i])){
            energy-=arr[i+1]-arr[i];
        }
        else if(arr[i]>arr[i+1]){
            energy+=arr[i]-arr[i+1];
 
        }
        else if((arr[i]<arr[i+1]) && (energy<arr[i+1]-arr[i])){
            cost+=arr[i+1]-arr[i]-energy;
            energy=0;
        }
        
    }
    cout<<cost<<endl;
 
    
    return 0;
}