#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	vector<int> a[n];
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		int o;
		for(int j=0;j<m;j++)
		{
			cin>>o;
			a[i].push_back(o);
		}
	}
	int r,s;
	for(int k=1;k<=q;k++)
	{
		cin>>r>>s;
		cout<<a[r][s]<<endl;
	}
	return 0;
}