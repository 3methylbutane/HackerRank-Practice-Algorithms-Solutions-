#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
	int n,m,k;
	cin>>n>>m>>k;
	if(abs(n-m)<=k)
	cout<<0<<endl;
	else
	cout<<abs(n-m)-k<<endl;
}
int32_t main()
{
	reus;
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
