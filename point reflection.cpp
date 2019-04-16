#include<iostream>
using namespace std;
int main()
{
	int t;
		cin>>t;
		while(t--)
		{
			int  x1,y1,x2,y2,p,q;
			cin>> x1>>y1>>x2>>y2;
			p=(2*x2-x1);
			q=(2*y2-y1);
			cout<<p<<" "<<q<<"\n";
		}
		return 0;
		
}
