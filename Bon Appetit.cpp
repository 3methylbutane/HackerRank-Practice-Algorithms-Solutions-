#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,bill[100005],s=0,b,p,z;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>bill[i];
	}
	for(i=0;i<n;i++)
	{
		s+=bill[i];
	}
	b= s-bill[k];
	p=b/2;
	cin>>z;
	if(z==p)
	cout<<"Bon Appetit"<<endl;
	else if(z!=p)
	cout<<(z-p)<<endl;
	return 0;
}
