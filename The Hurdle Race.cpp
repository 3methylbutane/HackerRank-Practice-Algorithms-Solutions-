#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,k,a[105],max;
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
		max=a[0];
		for(i=0;i<n;i++)
		{
			if(max<a[i])
			max=a[i];
		}
		if(max>k)
		{
			cout<<max-k<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
		return 0;
}
