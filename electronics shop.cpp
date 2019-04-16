#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,i,j,n,m,a[1005],c[1005],res=-1;
	cin>>b>>n>>m;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<m;i++)
	cin>>c[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]+c[j]<=b)
			res=max(res,a[i]+c[j]);
		}
	}
	cout<<res<<endl;
	return 0;
}
