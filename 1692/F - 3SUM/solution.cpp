//F. 3SUM
 
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
to make sum with unit place 3 => with digits from 0 to 9
0 0 3
0 1 2
0 4 9
1 1 1
1 3 9
1 4 8
1 5 7
1 6 6
2 2 9
2 3 8
2 4 7
2 5 6
5 9 9
6 8 9
6 9 8
7 7 9
7 9 7
 
 
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
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vi brr(10,0);
    for(int i=0;i<n;i++){
        brr[arr[i]%10]++;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if((i+j+k)%10==3){
                    brr[i]--;
                    brr[j]--;
                    brr[k]--;
                    if(brr[i]>=0 && brr[j]>=0 && brr[k]>=0){
                        cout<<"YES"<<endl;
                        return;
                    }
                    brr[i]++;
                    brr[j]++;
                    brr[k]++;
                }
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