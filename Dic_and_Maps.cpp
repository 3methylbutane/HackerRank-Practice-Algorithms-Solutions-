#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int32_t main()
{
	reus;
	int n;
	cin>>n;
	string name;
	int num,i;
	map<string, int> book;
	for(i=0;i<n;i++)
	{
		cin>>name;
		cin>>num;
		book[name]=num;
	}
	while(cin>>name)
	{
		if(book[name])
		cout<<name<<"="<<book[name]<<endl;
		else
		cout<<"Not found"<<endl;
	}
	return 0;
}
