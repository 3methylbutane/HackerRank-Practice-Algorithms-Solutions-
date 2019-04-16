#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,rem,a=0;;
		cin>>n;
		int temp=n;
		while(temp!=0)
		{
			rem=temp%10;
			temp=temp/10;
			a+=rem;
			
		}
		cout<<a<<endl;
	}
	return 0;
	}
