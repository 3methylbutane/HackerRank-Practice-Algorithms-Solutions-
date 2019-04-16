#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,q,m,i,a[n];
	cin>>n>>k>>q;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	k%=n;
	for(i=0;i<q;i++)
	{
		cin>>m;
		cout<<a[(n-k+m)%n]<<endl;
	}
	return 0;
	
}
