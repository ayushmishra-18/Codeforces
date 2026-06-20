//B. Annoying the Ghost
 
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
ai -> ai+x
swap(ai,ai+1)
also observe that brr is sorted
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vi arr(n),brr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    vi forme=arr;
    sort(all(forme));
    for(int i=0;i<n;i++){
        if(forme[i]>brr[i]){
            cout<<-1<<endl;
            return;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        int a=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<=brr[i]){
                a=j;
                break;
            }
        }
        count+=(a-i);
        int z=arr[a];
        arr.erase(arr.begin()+a);
        arr.insert(arr.begin()+i,z);
    }
    cout<<count<<endl;
    
    
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