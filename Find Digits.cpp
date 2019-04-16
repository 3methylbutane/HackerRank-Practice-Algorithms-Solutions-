#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,rem,c=0;
		cin>>n;
		int temp=n;
		while(temp)
		{
			rem=temp%10;
			temp=temp/10;
			if((rem!=0&&n%rem==0))
			c++;	
		}
		cout<<c<<endl;	
	}
	return 0;
}
