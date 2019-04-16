#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,b;
		cin>>l>>b;
		cout<<((l/__gcd(l,b))*(b/__gcd(l,b)))<<"\n";
	}
	return 0;
}
