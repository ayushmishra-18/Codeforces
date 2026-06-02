//A. Petr and Book
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
n = 100
15 20 20 15 10 30 45
15 + 20 + 20 + 15 + 10 + 30 => 110
100-15-20-20-15-10-30<=0
 
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
    int sum=0;
    vector<int>arr(7);
    for(int i=0;i<7;i++){
        cin>>arr[i];
        
    }
    int i=0;
    while(n>0){
        n-=arr[i];
        if(n<=0){
            break;
        }
        i++;
        i=i%7;
    }
    cout<<i+1<<endl;    
    
    return 0;
}