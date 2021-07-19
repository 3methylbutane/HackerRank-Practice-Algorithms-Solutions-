#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int32_t main()
{
	reus;
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,ans=1,k;
		cin>>n>>m;
		if(n%2==0 && m%2==0)
		cout<<(n*m)/2<<endl;
		else if(n%2!=0 && m%2!=0)
		cout<<((n*m)/2)+1<<endl;
		else
		cout<<(n*m)/2<<endl;
	}
	return 0;
}
