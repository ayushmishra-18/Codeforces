//B. Lovely Palindromes
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
SIMPLE
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
    string t=s;
    reverse(t.begin(),t.end());
    cout<<s<<t<<endl;
    return 0;
}