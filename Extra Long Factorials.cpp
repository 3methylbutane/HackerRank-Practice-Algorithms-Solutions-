#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int32_t main()
{
	reus;
	int val=0,carry=0;
	cin>>val;
	vector<int> a(200,0);
	a[0]=1;
	int k=0,i,j;
	for(i=1;i<=val;i++)
	{
		for(j=0;j<=k;j++)
		{
			a[j]=a[j]*i + carry;
			carry=a[j]/10;
			a[j]=a[j]%10;
		}
		while(carry)
		{
			k++;
			a[k]=carry%10;
			carry/=10;
		}
	}
	for(i=k;i>=0;i--)
	{
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}
