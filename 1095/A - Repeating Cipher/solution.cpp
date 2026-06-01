//A. Repeating Cipher
 
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
    string s;
    cin>>s;
    int i=0;
    int j=1;
    while(i<n){
        cout<<s[i];
        i=i+j;
        j++;
    }
    cout<<endl;
 
    return 0;
}