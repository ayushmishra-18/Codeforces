//C. Common Divisors
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
6 90 12 18 30 18
common divisor :- 1 2 3 6 => total 4
 
1 2 3 4 5
=>1
 
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
    sort(arr.begin(),arr.end());
    int g=arr[0];
    for(int i=1;i<n;i++){
        g=__gcd(g,arr[i]);
    }
    int count=0;
    for(int i=1;i*i<=g;i++){
        if(g%i==0){
            count++;
            if(i*i!=g){
                count++;
            }
        }
    }
    cout<<count<<endl;
 
 
    return 0;
}