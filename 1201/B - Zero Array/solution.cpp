//B. Zero Array
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
1 1 2 2 -> sum=6
0 0 2 2
0 0 1 1
0 0 0 0 -> "YES"
 
1 2 3 4 5 6 -> sum=21
1 2 2 4 5 5
1 1 1 4 5 5
0 0 1 4 5 5
0 0 1 4 4 4
0 0 1 3 3 4
0 0 1 2 2 4
0 0 1 1 1 4
0 0 0 0 1 4 -> Not possible
 
 
Sum must me even
andd maximum element should be less then equal to sum of remaining element
 
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
    vector<int>arr(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int maxi=*max_element(arr.begin(),arr.end());
    if(sum%2==0 && maxi<=sum-maxi){
        cout<<"YES"<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}