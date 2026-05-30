//A. Heating
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
c=4 sum=6
1 1 1 3 -> 12
1 1 2 2-> 10 minimum possible cost....
 
if c>=sum -> direct print sum.
 
else example  
c=3 sum=14
num=14/3 -> 4 (means every radiator has 4 sections)
rem=14%3 -> 2 (yet to distribute)
so final distribution -> 5 5 4 -> 66
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
        int c,sum;
        cin>>c>>sum;
        if(c>=sum){
            cout<<sum<<endl;
        }
        else{
            if(sum%c==0){
                cout<<c*(sum/c)*(sum/c)<<endl;
            }
            else{
                int num=sum/c;
                int rem=sum%c;
                cout<<((c-rem)*(num*num))+(rem*((num+1)*(num+1)))<<endl;;
            }
        
        }
    }
    return 0;
}