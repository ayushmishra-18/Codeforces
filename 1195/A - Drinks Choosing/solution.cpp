//A. Drinks Choosing
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
 a[i] -> fav drink
 total types of drink -> k
 1 set -> 2 bottles
 hmmmmmmmmmmmmmmmmm
 8 students -> 4 set
 9 students -> 5 set
 
    InputCopy
    n=5  k=3
    1 3 1 1 2
    toh yaha n=5 -> 3 set.....
    abb 3 set mangane kiske hai...........
    1st set -> 1 -> 2 happy
    2nd set -> 2 -> 1 happy
    3rd set -> 1 or 3 kiski ka bhi -> 1 happpy
    total=2+1+1= 4 happy!
 
    InputCopy
    n=10  k=3
    2 1 3 2 3 3 1 3 1 2
    toh yaha pe n=10 -> 5 set banenge
    abb 5 set kiske...
    1count=3 -> (1,1),1 
    2count=3 -> (2,2),2
    3count=4 -> (3,3 3,3)
    1+1+2=4 set me 8 happy... but we can bring 5 set
    then last set we can bring of either 1 or 2
    so total 9 happy in 5 sets
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
 
    vector<int>forme(k+1,0);
    int cap=(n+1)/2;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        forme[arr[i]]++;
    }
    int odd=0,even=0;
    for(int i=1;i<=k;i++){
        if(forme[i]%2!=0){
            even=even+(forme[i]-1);
            odd++;
        }
        else{
            even=even+forme[i];
        }
    }
    int res=0;
    res=res+2*min(even/2,cap);
    cap=cap-min(even/2,cap);
    
    res=res+cap;
    cout<<res<<endl;;
    
    return 0;
}