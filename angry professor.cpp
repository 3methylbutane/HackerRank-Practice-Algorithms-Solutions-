#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,c=0,a[1005];
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<=0)
			c=c+1;
		}
		if(c>k||c==k)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	return 0;
	}
