#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n==1)
    {
        cout<<1;
        return 0;
    }
    if (n<=3){
     cout<<"NO SOLUTION";
     return 0;
    }
 
    //even
    for(int i = 2;i<=n;i=i+2) {
        cout << i << " ";
    }
    //odd
    for(int i = 1;i<=n;i=i+2) {
                cout << i << " ";
    }
   
    return 0;
}