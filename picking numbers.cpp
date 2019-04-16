#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[105],i,c=0,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(abs(a[i]-a[j])<=1)
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}
