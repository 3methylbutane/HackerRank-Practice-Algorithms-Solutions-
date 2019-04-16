#include<bits/stdc++.h>
using namespace std;
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
	reus;
	int a[10],i,max,min,s=0;
	for(i=0;i<5;i++)
	cin>>a[i];
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	min=a[0];
	for(i=0;i<5;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	for(i=0;i<5;i++)
	{
		s+=a[i];
	}
	cout<<(s-max)<<endl;
	cout<<(s-min)<<endl;
	return 0;
	
}
