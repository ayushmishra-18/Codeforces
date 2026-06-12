//C. K-th Not Divisible by n
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '
'
 
typedef vector<int> vi;
 
const int INF = 1e18;
const int MOD = 1e9 + 7;
 
/*
n=3  k=7
no not divisible by 3 -> 1 2 4 5 7 8 10 11 .....
 
we will use Binary Search
first the search space is from 1 to inf
we divide it into half (mid)
divisors of n in the set mid would be (mid/n)
set of non divisors of n would be mid-(mid/n) ,let it be equal to count
if count>=k => ans=mid and h=mid-1 and we again splitted into halfs
else if count<k => l=mid+1 -> splitted into halfs
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,k;
    cin >> n>>k;
    int l=0;
    int h=INF;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        int count=mid-(mid/n);
        if(count>=k){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    
    
}
 
signed main() {
    fast_io();
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}