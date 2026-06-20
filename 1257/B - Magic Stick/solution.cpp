//B. Magic Stick
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
even -> 3a/2 => 1.5a
greater than 1 -> a-1
 
1->1
2->1 or 3
3->2
4->3 or 6
5->4
6->5 or 9
 
therfore x=1 always gives 1 , so it can't be manipulated 
AAAnd if x is less than or equal than 3 and y is something bigger than 3 is not possible
else possible everywhere 
 
x and y are greater than or equal to 1
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
        int x,y;
        cin>>x>>y;
        if(x==1 && y>1){
            cout<<"NO"<<endl;
        }
        else if(x<=3 && y>3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}