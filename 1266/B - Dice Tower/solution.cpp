//B. Dice Tower
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
sum of 2 opp faces on a die = 7
sum of side faces = 14*n (n is no of dice)
plus the top face (k) -> 14n+k (k is in b/w 1 to 6)
 
 
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
    for(int i=0;i<n;i++){
        if((arr[i]>14) && (arr[i]%14 >=1) && (arr[i]%14 <=6)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
        
    
    return 0;
}