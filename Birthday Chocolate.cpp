#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,d,m,a[100],c=0,s=0,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>d>>m;
	for(i=0;i<n;i++)
	{
		s=a[i];
		for(j=i+1;j<m;j++)
		{
			s+=a[j];
		}
		if(s==d)
		{
			c++;
		}
		m++;
	}
	cout<<c<<endl;
}
