#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int count=0;
    int drink=k*l;
    int slice=c*d;
    int salt=p;
    cout<<min({(drink/nl),(slice/1),(salt/np)})/n;
}