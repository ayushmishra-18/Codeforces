#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    if(n==1)
    cout<<'1';
    else if(n==2)
    cout<<'1';
    else if(n==3)
    cout<<'1';
    else if(n==4)
    cout<<'1';
    else if(n==5)
    cout<<'1';
    else if(n>5 and n%5!=0){
        cout<<(n/5)+1;
    }
    else if(n>5 and n%5==0){
        cout<<(n/5);
    }
}