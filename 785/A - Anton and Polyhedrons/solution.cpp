//A. Anton and Polyhedrons
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
 
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
    int res=0;
    while(n--){
        string s;
        cin>>s;
        if(s=="Tetrahedron"){
            res+=4;
        }
        else if(s=="Cube"){
            res+=6;
        }
        else if(s=="Octahedron"){
            res+=8;
        }
        else if(s=="Dodecahedron"){
            res+=12;
        }
        else if (s=="Icosahedron"){
            res+=20;
        }
    }
    cout<<res<<endl;
 
    return 0;
}