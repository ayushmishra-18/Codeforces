//A. Balanced Rating Changes
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
7
-7 -29 0 3 24 -29 38
-6 -30 0 4 24 -28 38
-4 -15 0 2 12 -14 19
 
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
    int odd=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2!=0){
            odd++;
        }
    }
    odd=odd/2;
    for(int i=0;i<n;i++){
        if(arr[i]%2){
            if(odd>0){
                odd--;
                arr[i]--;
            }
            else{
                arr[i]++;
            }
        }
        cout<<arr[i]/2<<endl;
 
    }
        
    return 0;
}