#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[105],j,c=0,b[105]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
	}
	for(i=0;i<105;i++)
	{
		c=c+(b[i]/2);
	}
	cout<<c<<endl;
	return 0;
}
