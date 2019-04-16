#include<iostream>
using namespace std;
int main()
{
	int n,m,a;
	cin>>n>>m;
	if(n%2!=0)
	n++;
	if(m%2!=0)
	m++;
	a=n*m/4;
	cout<<a;
}
