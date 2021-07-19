#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,max;
	cin>>a>>b>>c>>d;
	max=(a>b?a:b);
	max=(c>d?(c>max?c:max):(d>max?d:max));
	cout<<max<<endl;
	return 0;
 }
