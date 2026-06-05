//A. BowWow and the Timetable
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
4^0 -> 1 => 1
4^1 -> 4 => 100
4^2 -> 16 => 10000
4^3 -> 64 => 1000000
 
if s is a perfect power of 2 -> it has only single '1'
otherwise roundup length/2
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    string s;
    cin>>s;
    int one=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            one++;
        }
    }
    if(s=="0"){
        cout<<0<<endl;
    }
    else if(one==1){
        cout<<s.size()/2<<endl;
    }
    else if(one>1){
        cout<<ceil(1.0*s.size()/2)<<endl;
    }
 
    return 0;
}