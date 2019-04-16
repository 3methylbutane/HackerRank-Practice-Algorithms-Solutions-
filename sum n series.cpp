#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n,s,r;
		cin>>n;
		s=(n*(2+((n-1)*2)))/2;
		r=s%1000000007;
		cout<<r<<endl;
	}
	return 0;
}
