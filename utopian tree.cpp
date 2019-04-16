#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,h=1;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			if(i%2==0)
			h=h+1;
			if(i%2!=0)
			h=h*2;
		}
		cout<<h<<endl;
	}
}
