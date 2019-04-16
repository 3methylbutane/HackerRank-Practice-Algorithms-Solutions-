#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	if(x1>x2&&v1>v2||x2>x1&&v2>v1||v1==v2)
	{
		cout<<"NO"<<endl;
	}
	else if(((abs(x2-x1))%abs(v2-v1))==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
	return 0;
}
