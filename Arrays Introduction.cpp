#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	int a[1002];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(i=n;i>0;i--)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
