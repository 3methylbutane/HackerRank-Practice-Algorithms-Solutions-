#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int i,maxi,ans=0;
	long long int a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	maxi=a[0];
	for(i=0;i<n;i++)
	{
	   maxi=max(a[i],maxi);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==maxi)
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}

