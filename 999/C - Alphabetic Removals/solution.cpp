//C. Alphabetic Removals
 
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
Easyy
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,k;
    cin >> n>>k;
    string s;
    cin>>s;
    vi arr(26,0);
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    vi brr(26,0);
    int sum=0;
    for(int i=0;i<26;i++){
        if(k>=arr[i]){
            brr[i]=arr[i];
            k-=arr[i];
        }
        else{
            brr[i]=k;
            k=0;
            break;
        }
    }
    for(int i=0;i<s.size();i++){
        if(brr[s[i]-'a']>0){
            brr[s[i]-'a']--;
        }
        else{
            cout<<s[i];
        }
    }
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