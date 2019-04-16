#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,t,a,b,m,n,i,arr[100005],brr[100005],p=0,q=0,x=0,z=0;
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		cin>>arr[i];
		x=arr[i]+a;
		if(x>=s&&x<=t)
		p++;
	}
	for(i=0;i<n;i++)
	{
		cin>>brr[i];
		z=brr[i]+b;
		if(z>=s&&z<=t)
		q++;
	}
	cout<<p<<"\n"<<q<<endl;
	return 0;
}
