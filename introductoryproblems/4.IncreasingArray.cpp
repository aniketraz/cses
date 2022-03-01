#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll n;
    cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++) {
    cin>>a[i];
    }
    int mx=-1;
    ll output=0;
    for (int i=0; i<n; i++) {
        if (a[i]<mx) {
        output=output+mx-a[i];
        }
    mx=max(mx,a[i]);
    
    }
    cout<<output;
    
}