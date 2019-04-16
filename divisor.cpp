#include<bits/stdc++.h>
using namespace std;
int digsum(int n)
{
	int rem=0,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n,i,g=0;
	cin>>n;
	int f[100005],d[100005];
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				f[g]=i;
				g++;
			}
			else
			{
				f[g]=i;
				g++;
				f[g]=n/i;
				g++;
			}
		}
	}
	int maxi=0,ans=0;
	sort(f,f+g);
	for(i=0;i<g;i++)
	{
		d[i]=digsum(f[i]);
		if(maxi<d[i])
		{
			maxi=d[i];
			ans=f[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}
