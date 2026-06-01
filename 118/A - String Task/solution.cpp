//A. String Task
 
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
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        ch=tolower(ch);
        if(ch!='a' && ch!= 'e' && ch!='i' && ch!='o' && ch!='u' && ch!='y'){
            cout<<'.'<< ch;
        }
    }
 
    return 0;
}