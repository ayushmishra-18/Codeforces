//B. GCD Length
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
x is a number of a digits
y is a number of b digits
and the gcd(x,y) is of c digits
 
a=2 b=3 c=1
x->100
y->111
 
a=2 b=2 c=2
x->100
y->10
 
a=6 b=6 c=2
x->100000
y->111110
 
a=1 b=1 c=1
x->1
y->1
 
*/
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        string x,y;
        x="1";
        for(int i=0;i<a-1;i++){
            x=x+"0";
        }
        int one=b-c+1;
        for(int i=0;i<one;i++){
            y=y+"1";
        }
        for(int i=0;i<c-1;i++){
            y=y+"0";
        }
        cout<<x<<" "<<y<<endl;
        
    }
    return 0;
}