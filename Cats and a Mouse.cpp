#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z;
		if(abs(z-x)>abs(z-y))
		cout<<"Cat B"<<endl;
		else if(abs(z-y)>abs(z-x))
		cout<<"Cat A"<<endl;
		else if(abs(z-x)==abs(z-y))
		cout<<"Mouse C"<<endl;
	}
	return 0;

}
