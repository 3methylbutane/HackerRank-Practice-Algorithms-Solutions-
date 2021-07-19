#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int32_t main()
{
	reus;
	string s1,s2;
	cin>>s1>>s2;
	cout<<s1.size()<<" "<<s2.size()<<endl;
	cout<<s1+s2<<endl;
	char x=s1[0];
	char y=s2[0];
	s1[0]=y;
	s2[0]=x;
	cout<<s1<<" "<<s2<<endl;
	return 0;
}
