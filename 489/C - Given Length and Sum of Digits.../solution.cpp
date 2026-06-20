//C. Given Length and Sum of Digits...
 
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
length m and sum s
1 -> 1 2 3 4 5 6 7 8 9
2 -> 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
3 -> 1 2 3...... 27
 
pattern observed
 
for minimum no the first digit should be small like 1 or 2
for mximum no the first digit  should be  9 or 8 7
Good Problem
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int m,s;
    cin >> m>>s;
    if(s>9*m){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    if(s==0 && m==1){
        cout<<0<<" "<<0<<endl;
        return;
    }
    if(s==0 && m>1){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    string maxi="";
    int sum=s;
    for(int i=0;i<m;i++){
        int d=min((int)9,sum);
        maxi+=to_string(d);
        sum-=d;
    }
    string mini(m,'0');
    sum=s;
    sum-=1;
    for(int i=m-1;i>0;i--){
        int d=min((int)9,sum);
        mini[i]='0'+d;
        sum-=d;
    }
    mini[0]='0'+(sum+1);
    cout<<mini<<" "<<maxi<<endl;
 
    
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