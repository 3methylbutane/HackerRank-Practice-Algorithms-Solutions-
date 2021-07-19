#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,e=100;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i+=k)
	{
		e-=1+2*a[i];
	}
	cout<<e<<endl;
	return 0;
}
