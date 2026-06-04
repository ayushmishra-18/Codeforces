//B. OR in Matrix
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
A
1 0 1
0 0 0
 
B
1 1 1
1 0 1
 
get B from A
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n,m;
    cin>>m>>n;
    int A[m][n],B[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            A[i][j]=1;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
            if(B[i][j]==0){
                for(int k=0;k<n;k++){
                    A[i][k]=0;
                }
                for(int k=0;k<m;k++){
                    A[k][j]=0;
                }
            }
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(B[i][j]==1){
                int sum=0;
                for(int k=0;k<m;k++){
                    sum+=A[k][j];
                }
                for(int k=0;k<n;k++){
                    sum+=A[i][k];
                }
                if(sum==0){
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}