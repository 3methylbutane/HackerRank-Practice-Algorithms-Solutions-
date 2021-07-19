#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		for(int j=0;j<m;j++)
		{
			cin>>a[j];
		}
		int x,y;
		cin>>x>>y;
		if(i==x)
		cout<<a[y]<<endl;
	}
	return 0;
}
