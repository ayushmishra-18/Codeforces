//B. Little Girl and Game
 
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
count the frquency of the letters
string palindrome => if it has at most 1 odd frquency
if oddcount is 0 or 1 -> First easy win
if odd count is odd -> First remove odd character -> Second has even count -> Therefore First win
if odd count is even -> then Second win
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    string s;
    cin>>s;
    vi arr(26,0);
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    if(count<=1){
        cout<<"First"<<endl;
    }
    else if(count%2==0){
        cout<<"Second"<<endl;
    }
    else if(count%2!=0){
        cout<<"First"<<endl;
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