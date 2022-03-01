#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll n, a=0;
    cin>>n;
    for (int i=1; i<n; i++) {
        int b;
    cin>>b;
    a=a+b;
    }
    
    cout<<n*(n+1)/2 - a;
}