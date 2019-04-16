#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a=0,up=0;
	cin>>n;
	char c;
	for(i=0;i<n;i++)
	{
		cin>>c;
		if(c=='U')
		up++;
		else
		up--;
		if(up==0&&c=='U')
		a++;
	}cout<<a<<endl;
	return 0;
}
