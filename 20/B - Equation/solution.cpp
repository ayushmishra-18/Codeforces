//B. Equation
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
Ax2+Bx+C=0
(-b+D)/2a
(-b-D)/2a
D=sqrt(b2-4ac)
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    double D=(b*b-4*a*c);
    if(a==0 && b==0 && c==0){
        cout<<-1<<endl;
    }
    else if(a==0 && b==0 && c!=0){
        cout<<0<<endl;
    }
    else if(a==0 && b!=0){
        cout<<1<<endl;
        cout<<fixed<<setprecision(5)<<(-c)/(1.0*b)<<endl;
    }
    else if(D<0){
        cout<<0<<endl;
    }
    else if(D==0){
        cout<<1<<endl;
        cout<<fixed<<setprecision(5)<<-b/(2.0*a)<<endl;
    }
    else if(D>0){
        D=sqrt(D);
        cout<<2<<endl;
        cout<<fixed<<setprecision(5)<<min((-b-D)/(2.0*a),(-b+D)/(2.0*a))<<endl;
        cout<<fixed<<setprecision(5)<<max((-b-D)/(2.0*a),(-b+D)/(2.0*a))<<endl;
        
    }
    
}
 
signed main() {
    fast_io();
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}