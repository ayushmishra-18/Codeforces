//C. Number Game
 
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
if n is  1 Fastestfinger wins , if n is 2 Ashishgup wins
if n is odd Ashishgup wins
else if n is even then we have to check '2' are there in its prime factorization
then check if the it's not just a prime no when divided by 2
 
good problem
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vi arr;
    if(n==1){
        cout<<"FastestFinger"<<endl;
        return;
    }
    if(n==2){
        cout<<"Ashishgup"<<endl;
        return;
    }
    if(n%2!=0){
        cout<<"Ashishgup"<<endl;
        return;
    }
    int two=0;
    int m=n;
    while(m%2==0){
        two++;
        m=m/2;
    }
    if(m==1){
        cout<<"FastestFinger"<<endl;
        return;
    }
    if(two>1){
        cout<<"Ashishgup"<<endl;
        return;
    }
    int prime=0;
    for(int i=2;i*i<=m;i++){
        if(m%i==0){
            prime=1;
        }
    }
    if(prime==0){
        cout<<"FastestFinger"<<endl;
        return;
    }
    else{
        cout<<"Ashishgup"<<endl;
        return;
    }
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