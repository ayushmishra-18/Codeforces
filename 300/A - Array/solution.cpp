//A. Array
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '
'
 
typedef vector<int> vi;
 
const int INF = 1e18;
const int MOD = 1e9 + 7;
 
/*
set1 -> product of neg => only 1 neg no req
set2 -> product of pos => only 1 pos no req or two neg no
set3 -> product of zero => zero and put everything else
 
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vi arr(n);
    vi pos,neg,z;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i]>0){
            pos.pb(arr[i]);
        }
        else if(arr[i]<0){
            neg.pb(arr[i]);
        }
        else{
            z.pb(arr[i]);
        }
    }
    vi set1,set2,set3;
    set1.pb(neg.back());
    neg.pop_back();
    if(!pos.empty()){
        set2.pb(pos.back());
        pos.pop_back();
    }
    else{
        set2.pb(neg.back());
        neg.pop_back();
        set2.pb(neg.back());
        neg.pop_back();
    }
    for(auto x:neg){
        set3.pb(x);
    }
    for(auto x:pos){
        set3.pb(x);
    }
    for(auto x:z){
        set3.pb(x);
    }
    cout<<set1.size()<<" ";
    for(int x:set1){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<set2.size()<<" ";
    for(int x:set2){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<set3.size()<<" ";
    for(int x:set3){
        cout<<x<<" ";
    }
    cout<<endl;
 
    
 
}
 
signed main() {
    fast_io();
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}