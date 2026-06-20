//A. Pasha and Stick
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
firstly check if the number is even.
then if it divisible by 4 then print (n/4)-1
if not print n/4
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
    if(n%2!=0){
        cout<<0<<endl;
    }
    else{
        if(n%4!=0){
            cout<<n/4<<endl;
        }
        else{
            cout<<(n/4)-1;
        }
    }
 
    return 0;
}