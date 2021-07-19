#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int32_t main()
{
	reus;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=',')
		cout<<s[i];
		else
		cout<<endl;
	}
	return 0;
}
