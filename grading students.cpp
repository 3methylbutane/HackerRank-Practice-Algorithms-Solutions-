#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[60];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>=38)
		{
			if((a[i]%5)>=3)
			cout<<(a[i]-(a[i]%5)+5)<<endl;
			else
			cout<<a[i]<<endl;
		}
		else
		cout<<a[i]<<endl;
	}
	return 0;
}
