#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
n == a + b
a -> palindrome num
b -> divisible by 12
 
if we divide n number by 12 : every remainder will be a palindrome number except 10
for 10 -> 10+12=22
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
        int n;
        cin>>n;
        int a;
        if(n%12==10){
            a=22;
        }
        else{
            a=n%12;
        }
        if(n>=a){
            cout<<a<<" "<<n-a<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}