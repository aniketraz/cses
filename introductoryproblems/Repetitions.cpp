#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	string s;
	cin >> s;
	int count = 1 , ans=1;
	for (int i = 1; i < s.size(); ++i)
	{
		char a = s[i];
		char b = s[i-1];
 
		if (a==b){
			count = count+1;
		}
		else{
			count = 1;
		}
 
		ans = max(ans,count);
 
	}
	cout << ans;
}