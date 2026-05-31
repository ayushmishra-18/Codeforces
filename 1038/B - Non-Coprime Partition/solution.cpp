//B. Non-Coprime Partition
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
S=s1+s2
S=g*m + g*n -> g is gcd
S=g*(m+n)
g>1 m+n>1
 
S= _ * _
 
n=1 n=2 -> immpossible cases
 
if
n=5
1st->1 (5) => 5
2nd->4 (1 2 3 4) => 10
gcd=>5
 
n=8
1st-> 1 (8) => 8
2nd-> 7 (1 2 3 4 5 6 7) => 28
gcd=>4
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n;
    cin>>n;
    if(n<=2){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<n-1<<" ";
        for(int i=1;i<n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}