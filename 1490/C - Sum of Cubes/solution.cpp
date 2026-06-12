//C. Sum of Cubes
 
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
2 9 16 28 35 54 65 72 91 128 128 133 189 => no pattern observed
 
the min value of x would be 2 => 1+1
max value of x => 1e12
the max value of a could be 1e4 because 1e4*1e4*1e4=>1e12
since we got limits of a 
we can apply binary search to find b
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int x;
    cin >> x;
    vi arr;
    for(int i=1;i<=1e4;i++){
        int target=x-(i*i*i);
        if(target<=0){
            break;
        }
        int l=1;
        int h=1e4;
        while(l<=h){
            int mid=l+(h-l)/2; 
            if(mid*mid*mid==target){
                cout<<"YES"<<endl;
                return;
            }
            if(mid*mid*mid>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
    
    }
    cout<<"NO"<<endl;
    
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