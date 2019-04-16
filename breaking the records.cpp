#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[1000],i,c=0,d=0,min,max;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	min=a[0];max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			a[i]=max;
			c++;
		}
		if(a[i]<min)
		{
			a[i]=min;
			d++;
		}
	}cout<<c<<" "<<d<<endl;
	return 0;
}
